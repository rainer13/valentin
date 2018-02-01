#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//acuma arr3 e un array de lungime 3
typedef int arr3[3];


int suma(int a, int b){

	int s=0;
	s=a+b;
	return s;
}

int suma(int a[][5],int n){
	int i,j,s=0;
for(i=0;i<n;++i)
for(j=0;j<5;++j)
s+=a[i][j];
return s;
}

int main(){



	int a[5],b[5];

	int *mat=(int*)malloc(5*4*sizeof(int));
	for(int i=0;i<20;++i)
		mat[i]=i;

	for(int i=0;i<5;++i)
		a[i]=2*i;

	for(int i=0;i<5;++i)
		b[i]=2*i+1;

	int s= suma(12,54);
	printf("%d\n",s);

	//asa fortez un vector sa devina matrice pentru compilator
	//nu pot declara insa asa ceva implicit
	//vezi mai sus cum
	s=suma((int (*)[5])mat,4);
	printf("%d\n",s);

	s=suma((int (*)[5])a,1);
	printf("%d\n",s);

	s=suma((int (*)[5])b,1);
	printf("%d\n",s);

	//asa fac un pointer la o functie
	int (*ff)(int,int)=&suma;
	s=ff(3,5);
	printf("%d\n",s);

	return 0;
}
