#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>



void generator(int fd, int fd1){
int n=1+rand()%10,x;
printf("%ld scriere generare\n",write(fd,&n,sizeof(int)));
printf("%ld scriere generare\n",write(fd1,&n,sizeof(int)));
printf("numearul de numere eset %d\n",n);
for(int i=1;i<=n;i++){
	x=rand()%10;
	printf("numar generat %d\n",x);
	write(fd,&x,sizeof(int));
	write(fd1,&x,sizeof(int));
}
}

void suma(int fd){
sleep(3);	
int s=0,n=0,x;
printf("n suma %d\n",n);
printf("%ld citire generare\n",read(fd,&n,sizeof(int)));
printf("n suma %d\n",n);
for(int i=1;i<=n;i++){
	read(fd,&x,sizeof(int));
	printf("citit suma %d\n",x);
	s+=x;
}
printf("suma este %d\n",s);
exit(EXIT_SUCCESS);
}


void produs(int fd){
sleep(3);
int p=1,n=0,x;
printf("n produs %d\n",n);
read(fd,&n,sizeof(int));
printf("n produs %d\n",n);
for(int i=1;i<=n;i++){
	read(fd,&x,sizeof(int));
	printf("citit produs %d\n",x);
	if(x%2!=0)
		p*=x;
}
printf("produsul este %d\n",p);
exit(EXIT_SUCCESS);
}




int main(){
int mpfd[2][2];

printf("%d %d %d %d \n",mpfd[0][0],mpfd[0][1],mpfd[1][0],mpfd[1][1]);
printf("adresa mpfd %d\n",&mpfd);


printf("adresa pipe1 %d\n",pipe(mpfd[0]));
printf("adresa pipe2 %d\n",pipe(mpfd[1]));
printf("%d %d %d %d \n",mpfd[0][0],mpfd[0][1],mpfd[1][0],mpfd[1][1]);

//printf("%d %d %d %d",*mpfd,*(mpfd+1),*(mpfd+2),*(mpfd+3));

pid_t pid;
pid=fork();
if(pid==0){
		close(mpfd[0][1]);
		close(mpfd[1][1]);
		close(mpfd[1][0]);
	printf("adresa mpfd s %d\n",&mpfd);
	suma(mpfd[0][0]);}
else{
	pid=fork();
	if(pid==0){
		close(mpfd[0][1]);
		close(mpfd[0][0]);
		close(mpfd[1][1]);
		printf("adresa mpfd p %d\n",&mpfd);
		produs(mpfd[1][0]);}
	else{
	close(mpfd[0][0]);
	close(mpfd[1][0]);
		printf("adresa mpfd gen %d\n",&mpfd);
		generator(mpfd[0][1],mpfd[1][1]);
}

}
	
return 0;
}
