#include <iostream>
#include <stdlib.h>
#include <math.h>
//minHeap
using namespace std;
int heap[100];
int n;


void interschimbare(int &a, int &b){

    int aux=a;
    a=b;
    b=aux;


}

void climb(int n){

    if(n==1)
        return;
    if(heap[n]<heap[n/2]){


        interschimbare(heap[n],heap[n/2]);
        climb(n/2);
    }


}





void climb1(){

    int m=n;

    while(m!=1&&heap[m]<heap[m/2]){

        interschimbare(heap[m],heap[m/2]);
        m/=2;

    }

}

void pushDown(int m){

    if(2*m>n)
        return;
    if(heap[m]<heap[2*m]){

        if(2*m+1<=n){

            if(heap[m]<heap[2*m+1])
                return;
            else{
                interschimbare(heap[m], heap[2*m+1]);
                pushDown(2*m+1);
            }
        }

    }
    else{

        if(2*m+1<=n){

            if(heap[2*m+1]<heap[2*m]){

                interschimbare(heap[m],heap[2*m+1]);
                pushDown(2*m+1);
            }
            else{

                 interschimbare(heap[m],heap[2*m]);
                 pushDown(2*m);

            }
        }

    }


}



void adaugaElement(int info){

    ++n;
    heap[n]=info;
    climb(n);


}


int eliminaElement(){

    int a=heap[1];
    heap[1]=heap[n];
    --n;
    pushDown(1);
    return a;

}


void citire(int n){
    int x;
    for(int i=1;i<=n;i++){
       //cout<<"heap["<<i<<"]=";
       //cin>>x;
       //
       x=1+rand()%100;
       cout<<x<<" ";
       adaugaElement(x);

    }


}

void afisare(){
    int m=n;
    for(int i=1;i<=m;i++)
        cout<<eliminaElement()<<" ";

}


int main()
{
    citire(20);
    cout<<"\n";
    afisare();
    cout<<"\n";
    return 0;
}