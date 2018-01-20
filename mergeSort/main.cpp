#include <iostream>
#include <stdlib.h>
#include<string.h>
using namespace std;

int* merge(int* v1, int*v2, int m, int n){

    int* a=(int*)malloc(sizeof(int)*(m+n));
    int i=0,j=0;
    while(i<n && j<m){

        a[i+j]=min(v1[i],v2[j]);
        if(a[i+j]==v1[i])
            ++i;
        else ++j;

    }
    while(i<n){

        a[i+j]=v1[i];
        i++;

    }

    while(j<m){

        a[i+j]=v2[j];
        j++;
    }

    return a;

}

void mergeSort(int *v, int n){
        if(n==1)
            return;

        int* a=(int*)malloc(sizeof(int)*(1+n/2));
        int* b=(int*)malloc(sizeof(int)*(1+n-(n/2)));
        int* c=(int*)malloc(sizeof(int)*(n+1));
        int c1=0, c2=0;
        int s=0;
        for(int i=0;i<=(n-1)/2;i++){
            a[i]=v[i];
            c1++;
            }

        for(int i=((n-1)/2)+1;i<n;i++){
            b[s]=v[i];
            s++;
            c2++;
            }


       mergeSort(a,c1);

       mergeSort(b,c2);
      c=merge(a,b,c2,c1);

        memcpy(v,c,n*sizeof(int));




}


void mergeSort1(int *v, int n){


    int m=(n-1)/2;
    if(n==1)return;
    mergeSort1(v,m);
    mergeSort1(v+m,n-m);
    int *c=merge(v,v+m,n-m,m);
    memcpy(v,c,n*sizeof(int));


}



int main()
{

    int a[5], b[3], *c,i;
    a[1]=7;
    a[2]=4;
    a[3]=9;
    a[4]=2;
    a[0]=10;

    b[1]=5;
    b[2]=6;
    b[0]=2 ;

    c=merge(a,b,3,5);
    for(i=0;i<8;++i)
        cout<<c[i]<<" " ;
cout<<"\n";
    mergeSort(a,5);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
        cout<<"\n\n";



    a[1]=7;
    a[2]=4;
    a[3]=9;
    a[4]=2;
    a[0]=10;

    mergeSort1(a,5);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
        cout<<"\n\n";


    return 0;
}
