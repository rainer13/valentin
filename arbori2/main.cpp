#include <iostream>

using namespace std;


struct element{

    int i;
    element *left, *right;

};

element* root =NULL;

void adaugareElement(int i){

    if(root==NULL){

        root= new element();
        root->i=i;
        root->left=NULL;
        root->right=NULL;
        return;

    }

    element* e=root;
    do{
           if(i<e->i){
            if(e->left!=NULL)
                e=e->left;
            else{
                e->left=new element();
                e->left->i=i;
                e->left->left=NULL;
                e->left->right=NULL;
                return;
            }


           }
           else{

             if(e->right!=NULL)
                e=e->right;
            else{
                e->right=new element();
                e->right->i=i;
                e->right->right=NULL;
                e->right->left=NULL;
                return;
            }


           }

    }while(true);




}


void afisare(element *e){

    if(e==NULL)
        return;
    afisare(e->left);
    cout<<e->i<<" ";
    afisare(e->right);


}


int main()
{
    adaugareElement(4);
    adaugareElement(3);
    adaugareElement(10);
    adaugareElement(2);
    adaugareElement(-1);
    adaugareElement(6);
    adaugareElement(1);
    adaugareElement(15);
    adaugareElement(5);
    adaugareElement(9);

    afisare(root);


    return 0;
}
