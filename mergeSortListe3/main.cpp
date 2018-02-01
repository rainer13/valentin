// mergeSortValentin_lista_timp.cpp : Defines the entry point for the console application.
//



#include <iostream>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct nod {

	int data;
	nod* next;
};



void insertEnd(int dat, nod **head) {
	if (*head == NULL) {
		*head = new nod();
		(*head)->data = dat;
		return;
	}
	nod *n = *head;
	while (n->next != NULL)
		n = n->next;
	nod *m = new nod;
	m->next = NULL;
	m->data = dat;
	n->next = m;
}


nod* insertEnd1(int i, nod*head){

    nod *n = head;
	while (n->next != NULL)
		n = n->next;
	nod *m = new nod;
	m->next = NULL;
	m->data = i;
	n->next = m;
	return m;
}



void show(nod *h) {
	while (h != NULL) {
		cout << h->data << " ";
		h = h->next;
	}
	cout << "\n";
}



nod* merge(nod *head1, nod *head2) {
	if (head1 == NULL&&head2==NULL)
		return NULL;
	nod * head = new nod();
	nod *curent = head;
	while (head1 != NULL&&head2 != NULL) {
		if(head1->data < head2->data){
			curent->data = head1->data;
			head1 = head1->next;
		}
		else {
			curent->data = head2->data;
			head2 = head2->next;
		}
		nod *n = new nod;
		curent->next = n;
		curent = curent->next;
	}

	if (head1 != NULL) {
		curent->data = head1->data;
		curent->next = head1->next;
	}
	else {
		curent->data = head2->data;
		curent->next = head2->next;
	}

	return head;
}

nod* mergeInPlace(nod *head1, nod *head2) {
	if (head1 == NULL&&head2 == NULL)
		return NULL;
	nod * head, *curent;

	if (head1->data < head2->data) {
		head = head1;
		head1 = head1->next;
	}
	else {
		head = head2;
		head2 = head2->next;
	}
	curent = head;


	while (head1 != NULL&&head2 != NULL) {
		if (head1->data < head2->data) {
			curent->next = head1;
			curent = head1;
			head1 = head1->next;
		}
		else {
			curent->next = head2;
			curent = head2;
			head2 = head2->next;
		}
	}

	if (head1 != NULL) {
		curent->next = head1;
	}
	else {
		curent->next = head2;
	}


	return head;
}

nod* mergeSort(nod* head1){
    if(head1== NULL)
        return NULL;
    int c=0;
    nod* head= head1;
    nod* curent= head;
    while(head!=NULL){

        c+=1;
        head=head->next;
    }
    if(c==1)
        return head1;

  for(int i=0;i<(c/2)-1;i++){


		curent = curent->next;
   }
   nod *cc=curent->next;
   curent->next=NULL;

   head1 = mergeSort(head1);

   cc = mergeSort(cc);
   head=merge(head1,cc);
  return head;
}



nod* citire(int n, nod *head){
    int x;
     for(int i=0;i<n;i++){
       x=1+rand()%100;
        insertEnd(x,&head);
    }
    return head;
}



nod* citire1(int n, nod *head){
    int x=1+rand()%100;;
    insertEnd(x,&head);
    nod*h=head;
     for(int i=1;i<=n;i++){
       x=1+rand()%100;
        h=insertEnd1(x,h);
    }
    return head;
}


int main()
{

	nod* head1 = NULL;
	//head1=citire(100,head1);
	//show(head1);

	clock_t begin = clock();
	clock_t end = clock();
	double time_spent;
    /*head1=citire(10000,head1);
    clock_t end = clock();
    double time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
    cout<<time_spent<<" "<<end-begin;
    cout<<"\n";
        head1=NULL;*/

     head1=citire1(1000000,head1);
     begin = clock();
    mergeSort(head1);
     end = clock();
    time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
    cout<<time_spent<<" "<<end-begin;
    cout<<"\n";


	/*
	insertEnd(1, &head1);
	insertEnd(2, &head1);
	insertEnd(3, &head1);
	insertEnd(4, &head1);
	insertEnd(5, &head1);
	insertEnd(6, &head1);




	nod* head2 = NULL;
	insertEnd(3, &head2);
	insertEnd(4, &head2);
	insertEnd(5, &head2);
	insertEnd(6, &head2);
	insertEnd(7, &head2);
	insertEnd(8, &head2);
	insertEnd(5, &head2);
	insertEnd(6, &head2);
	insertEnd(7, &head2);
	insertEnd(8, &head2);

    head2=mergeSort(head2);
	show(head1);
	show(head2);

	nod * headMerged = mergeInPlace(head2, head1);
	show(headMerged);
	cout << "\n\n";*/
/*
	head1 = NULL;
	insertEnd(1, &head1);
	insertEnd(2, &head1);
	insertEnd(3, &head1);
	insertEnd(4, &head1);
	insertEnd(5, &head1);
	insertEnd(6, &head1);


	head2 = NULL;
	insertEnd(3, &head2);
	insertEnd(4, &head2);
	insertEnd(5, &head2);
	insertEnd(6, &head2);
	insertEnd(7, &head2);
	insertEnd(8, &head2);

	show(head1);
	show(head2);

	headMerged = mergeInPlace(head2, head1);
	show(headMerged);*/




	return 0;
}
