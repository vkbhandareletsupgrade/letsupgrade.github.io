#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;
};
node* top=NULL;
void insert();
void mid();
int main(){
    int ch;
    do{
        cout<<endl<<"1. insert ";
        cout<<endl<<"2.find mid element ";
        cout<<endl<<endl<<"enter your  choice : ";
        cin>>ch;
        switch(ch){
            case 1: insert();
                    break;
            case 2: mid();
                    break;        
        }
    }while(ch>=1 && ch<= 2);
}
void insert(){
    node*p=new node;
    cout<<endl<<" enter the data : ";
    cin>>p->data;
    p->next=NULL; 
    if( top==NULL){
        top=p;
    }else{
        node*temp=top;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
}
void mid(){
    node*slow=top;
    node*fast=top;
    if(top==NULL){
        cout<<endl<<" the link is empety ";
    }else{
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<endl<<" the mid element = "<<slow->data;
    }
}