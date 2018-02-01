#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>



void generator(int fd, int fd1){
int n=1+rand()%100,x;
write(fd,n,sizeof(int));
write(fd1,n,sizeof(int));
printf("numearul de numere eset %d\n",n);
for(int i=1;i<=n;i++)
	x=rand()%10;
	write(fd,x,sizeof(int));
	write(fd1,x,sizeof(int));
}

void suma(int fd){
	
int s=0,n,x;
printf("n suma %d\n",n);
read(fd,&n,sizeof(int));
printf("n suma %d\n",n);
for(int i=1;i<=n;i++){
	read(fd,&x,sizeof(int));
	s+=x;
}
printf("suma este %d\n",s);
}


void produs(int fd){
	
int p=1,n,x;
printf("n produs %d\n",n);
read(fd,&n,sizeof(int));
printf("n produs %d\n",n);
for(int i=1;i<=n;i++){
	read(fd,&x,sizeof(int));
	if(x%2!=0)
		p*=x;
}
printf("produsul este %d\n",p);
}




int main(){
int mpfd[2][2];
pipe(mpfd[0]);
pipe(mpfd[1]);

//printf("%d %d %d %d",*mpfd,*(mpfd+1),*(mpfd+2),*(mpfd+3));

pid_t pid;
pid=fork();
if(pid==0){
	close(mpfd[0][0]);
	close(mpfd[1][0]);
	generator(mpfd[0][1],mpfd[1][1]);}
else{
	pid=fork();
	if(pid==0){
		close(mpfd[0][1]);
		close(mpfd[1][1]);
		close(mpfd[1][0]);
		suma(mpfd[0][0]);}
	else{
		close(mpfd[0][1]);
		close(mpfd[0][0]);
		close(mpfd[1][1]);
		produs(mpfd[1][0]);
}

}
	
return 0;
}
