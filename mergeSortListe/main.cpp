#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

struct Elev{

    int cnp;
    Elev* next;
};



void insertPoz(int cnp,int pozitie, Elev **head){

    Elev *e=new Elev();
    e->cnp=cnp;
    if(*head==NULL)
    {
        *head=e;
        e->next=NULL;

    }
    else
        if(pozitie>1)


    {
        Elev* f=*head;
        for(int i=1;i<=pozitie&&f->next!=NULL;++i)
            f=f->next;
        if(f->next==NULL)
        {
            e->next=NULL;
            f->next=e;
        }
        else
        {
            e->next=f->next;
            f->next=e;
        }
    }
    else{
        e->next=*head;
        *head=e;
    }

}



void merge(Elev *head1, Elev *head2){

    Elev *e= new Elev();
    while(head1!= NULL && head2!=NULL ){

        e->cnp=min(head1->cnp, head2->cnp);
        e=e->next;


        if(e->cnp==head1->cnp){

            head1=head1->next;

        }


        else{

             head2=head2->next;


        }

    }


    while(head1!=NULL){

        e=e->next;
        e->cnp=head1->cnp;
        head1=head1->next;


    }


     while(head2!=NULL){

        e=e->next;
        e->cnp=head2->cnp;
        head2=head2->next;

    }

    while(e!=NULL){

        cout<<e->cnp<<" ";
        e=e->next;

    }
}



int main()
{

    Elev* head=NULL;
    insertPoz(1,1,&head);
    insertPoz(2,2,&head);
    insertPoz(3,3,&head);
    insertPoz(4,4,&head);
    insertPoz(5,5,&head);
    insertPoz(6,6,&head);


    Elev* head2=NULL;
    insertPoz(3,1,&head2);
    insertPoz(4,2,&head2);
    insertPoz(5,3,&head2);
    insertPoz(6,4,&head2);
    insertPoz(7,5,&head2);
    insertPoz(8,6,&head2);

   merge(head,head2);




    return 0;
}
