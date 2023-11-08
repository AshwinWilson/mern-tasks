#include<iostream>
using namespace std;

struct node{
    int info;
    node*next;
};


node*start=NULL,*tail= NULL,*temp=NULL;

void insert_begin(int value){
    node *p= new node;
    if(start==NULL){
         tail=p;
     }
    
    p->info=value;
    p->next=start;
    start=p;
    
}

void insertLast(int value){
    node *p= new node;
    p->info=value;
    p->next=NULL;
    if(start==NULL){
        start=new node;
        start=p;
        tail=p;
    }
    else{
    tail->next=p;
    tail=p;
    }
}

void printNode(){
    temp=start;

    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->next;
    }
}


int main(){
    
    insertLast(22);
    insertLast(23);
    printNode();
    cout<<endl;
    insert_begin(10);
    insert_begin(20);
    printNode();
}