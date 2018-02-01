#include <iostream>
#include <fstream>
#include <string.h>
#include <time.h>
using namespace std;


int v,e;
ifstream f("date.in");
int leg[10001][10001];
int  head=1, tail=0;
int qu[10001] ;

struct nod{

    int i;
    nod *next;

};

nod *listaLeg[10001];
int vizitat[10001];

void adugareElement(int a, int b){

    if(listaLeg[a]==NULL){
        listaLeg[a]=new nod();
        listaLeg[a]->i=b;
        listaLeg[a]->next=NULL;
    }
    else{
        nod *n=new nod();
        n->i=b;
        n->next=listaLeg[a];
        listaLeg[a]=n;
    }

    if(listaLeg[b]==NULL){
        listaLeg[b]=new nod();
        listaLeg[b]->i=a;
        listaLeg[b]->next=NULL;
    }
    else{
        nod *n=new nod();
        n->i=a;
        n->next=listaLeg[b];
        listaLeg[b]=n;
    }


}

void afisareListaDinVector(int a){
nod* n=listaLeg[a];
cout<<a<<": ";
while(n!=NULL){
    cout<<n->i<<" ";
    n=n->next;
}
cout<<"\n";
}

void bfsLista(int ve, int nr){

     head=1, tail=0;
    qu[++tail]=ve;
    vizitat[ve]=nr;

    while(head<=tail){

        nod* n1= listaLeg[qu[head]];
        while(n1!=NULL){
            if(vizitat[n1->i]==0){

                qu[++tail]=n1->i;
                vizitat[n1->i]=nr;

        }
         n1=n1->next;
        }
         ++head;

    }



}

// dfs pentru numerotarea componentelor conexe
void dfs(int nc, int nr){
    vizitat[nc]=nr;

    for(int i =1;i<=v;i++){

        if(vizitat[i]==0 && leg[nc][i]==1){
            dfs(i,nr);

        }

    }


}

int distantaIntreVertexuri(int start, int stop){
    memset((void*)vizitat,0,100*sizeof(int));
    head=1, tail=0;
    qu[++tail]=start;
    vizitat[start]=0;

    while(head<=tail){

        for(int i=0;i<v;i++)
        if(leg[qu[head]][i]==1 && vizitat[i]==0 && i!=start){

            if(i==stop)
                return 1+vizitat[qu[head]];
            qu[++tail]=i;
            vizitat[i]=1+vizitat[qu[head]];


        }
         ++head;

    }

    return 10000;



}

void bfs(int v1,int nr){

    head=1, tail=0;
    qu[++tail]=v1;
    vizitat[v1]=nr;

    while(head<=tail){

        for(int i=1;i<=v;i++)
        if(leg[qu[head]][i]==1 && vizitat[i]==0){

            qu[++tail]=i;
            vizitat[i]=nr;


        }
         ++head;

    }




}

int main()
{
   clock_t begin = clock();
	clock_t end = clock();
	double time_spent;



    memset((void*)listaLeg,0x0,100*sizeof(void*));
   f>>v;
   f>>e;
   int x,y,a,b,c=0;
   for(int i=1;i<=e;i++){

        f>>x>>y;
        leg[x][y]=leg[y][x]=1;
        adugareElement(x,y);

   }


   cout<<"\n\nafisareListe:\n";
   for(int i=1;i<=12;++i)
    afisareListaDinVector(i);
/*
   f>>a>>b;
   if(leg[a][b]==1)
    cout<<"exista legatura intre "<<a<<" si "<<b<<"\n";
   for(int i=1;i<=v;i++)
        if(leg[a][i]==1 && leg[b][i]==1){

            c=i;
            break;

        }

        if(c)
            cout<<"exista legatura intre "<<a<<" si "<<b<<" prin "<<c<<"\n";
        else
            cout<<"nu exista\n";

*/
    int nr=0;
    for(int i=v;i>0;i--){
        if(vizitat[i]==0)
            dfs(i,++nr);
            }
    cout<<"numarul de componente conexe este "<<nr<<"\n";


    nr=0;
    memset((void*)vizitat,0,100*sizeof(int));
    begin = clock();


    for(int i=v;i>0;i--){
        if(vizitat[i]==0)
            bfsLista(i,++nr);
            }
    cout<<"numarul de componente conexe este "<<nr<<"\n";
    end = clock();
    time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
    cout<<time_spent<<" "<<end-begin;
    cout<<"\n";

    nr=0;
    memset((void*)vizitat,0,100*sizeof(int));
    begin = clock();
    for(int i=v;i>0;i--){
        if(vizitat[i]==0)
            bfs(i,++nr);
            }
    cout<<"numarul de componente conexe este "<<nr<<"\n";
    end = clock();
    time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
    cout<<time_spent<<" "<<end-begin;
    cout<<"\n";
    for(int i=1;i<=v;i++)
        cout<<vizitat[i]<<" ";

    cout<<"\n";cout<<"\n";
    for(int i=1;i<=12;i++){
     for(int j=1;j<=12;j++)
            cout<<leg[i][j]<<" ";
    cout<<"\n";
    }
    cout<<distantaIntreVertexuri(5,6)<<" "<<distantaIntreVertexuri(7,9)<<" "<<distantaIntreVertexuri(16,17);
    return 0;
}

