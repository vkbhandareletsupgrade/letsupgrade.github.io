#include<iostream>
using namespace std;
class node{
   public: 
         int data;
         node* next;
};
node* top=NULL;
void insertion();
void display();
void reverse();
int main(){
    int ch;
   do{
    cout<<endl<<" Menu for link list ";
    cout<<endl<<" 1. insert ";
    cout<<endl<<"2. display ";
    cout<<endl<<" 3. reverse ";
    cout<<endl<<"4. exit ";
    cout<<endl<<"enter your choice : ";
    cin>>ch;
    switch(ch){
        case  1: insertion();
                 break;
        case 2:  display();
                 break;
        case 3:  reverse();
                 break;         

    }
   }while(ch>=1 && ch<=3);
}
void insertion(){
    node*ptr=new node();
        cout<<endl<<" enter the data : ";
        cin>>ptr->data;
        ptr->next=NULL;
        if(top==NULL){
            top=ptr;
        }else{
            node*temp=top;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
        }
}
void display(){
    if(top==NULL){
        cout<<endl<<" the list is empety ";
    }else{
        node*temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
void reverse(){
        node *p,*c,*n;
        p=NULL;
        c=top;
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        top=p;
        if(p==NULL){
            cout<<endl<<"sorry list is empety ";
        }else{
            while(p!=NULL){
                cout<<" "<<p->data<<" ->";
                p=p->next;
            }
            cout<<"NULL";
        }

}