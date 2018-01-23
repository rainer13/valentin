#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

/*char s[10];
int n;

struct produs{

    int pret, cantitate;
    char *nume;


};


produs produse[100];

void citire(){

    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++){
        produse[i].nume=(char*)malloc(20);
        cin>>produse[i].pret>>produse[i].cantitate>>produse[i].nume;

    }



}



void sortare(){

produs aux;
int gasit;

do{

    gasit=0;
    for(int i=1;i<=n-1;i++)
        if(produse[i].cantitate<produse[i+1].cantitate || (produse[i].cantitate==produse[i+1].cantitate && strcmp(produse[i].nume,produse[i+1].nume)>0)){

            aux=produse[i];
            produse[i]=produse[i+1];
            produse[i+1]=aux;
            gasit=1;

        }




}while(gasit==1);

}


void afisare(int k){

    for(int i= 1;i<=k;i++)
        cout<<produse[i].nume<<" "<<produse[i].cantitate<<"\n";

}


int main()
{

    citire();
    sortare();
    int k;
    cout<<"k=";cin>>k;
    afisare(k);
    return 0;
}
*/
//problema 8

unsigned int n;

struct carte{

    char autor[10];
    char titlu[10];
    char genLiterar[10];
    int pret;
};

bool comparare(carte c1, carte c2){


    if(strcmp(c1.genLiterar,"proza")==0 && strcmp(c2.genLiterar,"proza")!=0)
        return 0;

    if(strcmp(c1.genLiterar,"proza")!=0 && strcmp(c2.genLiterar,"proza")==0)
        return 1;

     if(c1.pret<c2.pret)
        return 0;

    if(c1.pret>c2.pret)
        return 1;
int x=-strcmp(c1.titlu,c2.titlu);
    return x>0?x:0;

}



carte carti[100];


void citire(){

    cout<<"n=";cin>>n;
    for(unsigned int i=0;i<n;i++){
        cout<<"autorul=";cin>>carti[i].autor;
        cout<<"titlul=";cin>>carti[i].titlu;
        cout<<"genul literar=";cin>>carti[i].genLiterar;
        cout<<"pret=";cin>>carti[i].pret;
        cout<<"\n";

    }



}


void sortare(){

carte aux;
int gasit;

do{
    gasit=0;
    for(unsigned int i=0;i<n-1;i++)
       if(strcmp(carti[i].titlu,carti[i+1].titlu)<0){

        aux=carti[i];
        carti[i]=carti[i+1];
        carti[i+1]=aux;
        gasit=1;

    }

}while(gasit==1);

}

void afisare(){

    for(unsigned int i=0;i<n;i++)
        cout<<carti[i].titlu<<" "<<carti[i].autor<<" "<<carti[i].genLiterar<<" "<<carti[i].pret<<"\n";

}

void afisare1(){
char proza[20]="proza";
    for(unsigned int i=0;i<n;i++)
        if(strcmp(carti[i].genLiterar,proza)==0)
            cout<<carti[i].titlu<<" de "<<carti[i].autor<<"\n";
        else i=n;

}




void minim(){

    carte minim=carti[0];
    cout<<"cartile cu cel mai mic pret sunt: ";
    for(unsigned int i=0;i<n;i++)
        if(minim.pret>=carti[i].pret){
            minim=carti[i];

        }


     for(unsigned int i=0;i<n;i++)
        if(minim.pret==carti[i].pret)
            cout<<carti[i].titlu<<" ";
     cout<<"\n";

}


void sortare1(){

    std::sort(carti,carti+n,comparare);

}




int main(){

    citire();
    minim();
    cout<<"\n";
    sortare();
    afisare();
    sortare1();
    afisare1();

    return 0;

}

/*
problema 9
struct element{

    unsigned int cod, suprafata, numarDeLocuitori, venitGlobalAnual;
    char nume[20];



};

unsigned int n;
element elemente[100];

void citire(){

cout<<"n=";cin>>n;
for(unsigned int i=0;i<n;i++){
    cin.get();
    cout<<"Tara este ";cin.get(elemente[i].nume,20);
    cout<<"Codul tarii este ";cin>>elemente[i].cod;
    cout<<"Suprafata tarii este ";cin>>elemente[i].suprafata;
    cout<<"Numarul de locuitori pe km patrat este ";cin>>elemente[i].numarDeLocuitori;
    cout<<"Venitul global anual este de ";cin>>elemente[i].venitGlobalAnual;
    cout<<"\n";
}

}


void afisare(){

for(unsigned int i=0;i<n;i++)
    cout<<elemente[i].nume<<" "<<elemente[i].numarDeLocuitori<<" "<<elemente[i].venitGlobalAnual<<"\n";


}


void sortare(){

element aux;
unsigned int gasit;

do{

    gasit=0;
    for(unsigned int i=0;i<n-1;i++)
    if(strcmp(elemente[i].nume, elemente[i+1].nume)>0){

        aux=elemente[i];
        elemente[i]=elemente[i+1];
        elemente[i+1]=aux;
        gasit=1;
    }

}while(gasit==1);


}


void sortare1(){

element aux;
unsigned int gasit;
do{
    gasit=0;
    for(unsigned int i=0;i<n-1;i++)
     if(elemente[i].numarDeLocuitori>elemente[i+1].numarDeLocuitori || (elemente[i].numarDeLocuitori==elemente[i+1].numarDeLocuitori && elemente[i].venitGlobalAnual<elemente[i+1].venitGlobalAnual )){


        aux=elemente[i];
        elemente[i]=elemente[i+1];
        elemente[i+1]=aux;
        gasit=1;

    }


}while(gasit==1);

}





int main(){


    citire();
    sortare();
    afisare();
    cout<<"\n";
    sortare1();
    afisare();
    return 0;

}*/

/*
//poblema 6
int n;

enum numeMeteorolog{

    a,b,c

};

void afisareNumeMeteorolog( numeMeteorolog nm){

    switch(nm){

    case 0 : cout<<"ana\n";
                                break;
    case 1 : cout<<"alex\n";
                                break;

    case 2 : cout<<"ioana\n";
                                break;


    }

}


struct buletinMeteo{

    numeMeteorolog n;
    char numeMeteorolog[20];
    int presiune,temperatura;


};


buletinMeteo buletine[100];

void citire(){

    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++){
        cin.get();
        cout<<"numele meteorologului este ";cin.get(buletine[i].numeMeteorolog,20);
        cout<<"presiunea atmosferica este ";cin>>buletine[i].presiune;
        cout<<"temperatura este ";cin>>buletine[i].temperatura;
        cout<<"\n";
    }

}


void temperaturaMaxima(){

buletinMeteo maxim=buletine[1];

    cout<<"temperatura maxima a fost atinsa in zilele\n";
    for(int i=1;i<=n;i++){
        if(maxim.temperatura<buletine[i].temperatura)
            maxim=buletine[i];

    }

    for(int i=1;i<=n;i++){
        if(maxim.temperatura==buletine[i].temperatura)
            cout<<" meteorolog de serviciu in ziua "<<i<<" a fost "<<buletine[i].numeMeteorolog<<" \n";

    }
    cout<<"temperatura maxima a fost de "<<maxim.temperatura<<" grade.";

}



int main(){

    citire();
    temperaturaMaxima();
    return 0;

}*/








