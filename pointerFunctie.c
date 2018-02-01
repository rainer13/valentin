#include<stdio.h>
#include<unistd.h>
int suma(int a, int b){

	int s=0;
	s=a+b;
	return s;
}

int main(){

	int s= suma(12,54);
	printf("%d",s);
	return 0;
}
