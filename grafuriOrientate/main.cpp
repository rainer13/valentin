#include <iostream>
#include <fstream>
using namespace std;

int leg[100][100];
ifstream f("date1.in");
int vizitat[100];
int urma[100];
int flag=0;
int v,e;

void afisare( int v, int poz){

    if(urma[poz]!=v)
        afisare(v,poz-1);
    cout<<urma[poz]<<" ";
}

void identificareCicluri(int vv, int poz){
    urma[poz]=vv;
    vizitat[vv]=1;



        for(int i=1;i<=v && flag==0;i++)
            if(leg[vv][i]==1 && vizitat[i]==1){
                afisare(i,poz);
                cout<<i<<"\n";
                flag=0;
                return;
            }
        for(int i=1;i<=v && flag==0;i++)
            if(leg[vv][i]==1 && vizitat[i]==0){
                identificareCicluri(i,poz+1);


    vizitat[vv]=0;



}}

int main()
{
    int x,y;
    f>>v>>e;
    cout<<e<<" "<<v<<"\n";
    for(int i=0;i<e;i++){
        f>>x>>y;
        cout<<x<<" "<<y<<"\n";
        leg[x][y]=1;
        }

    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++)
            cout<<leg[i][j]<<" ";
        cout<<"\n";
    }
    identificareCicluri(2,2);
    return 0;
}
