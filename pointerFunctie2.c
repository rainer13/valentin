#include<stdio.h>
#include<unistd.h>
int suma(int a, int b){

	int s=0;
	s=a+b;
	return s;
}

int main(){



	int a[5],b[5];
	int (*p[7]) [5];
	p[1]=a;
	p[2]=b;



	int s= suma(12,54);
	printf("%d\n",s);

	int (*ff)(int,int)=&suma;
	s=ff(3,5);
	printf("%d\n",s);

	return 0;
}
