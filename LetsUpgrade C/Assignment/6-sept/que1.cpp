#include<iostream>
using namespace std;
class node{
    public:
            int data;
            node *next;
};
void insertion( node*);
void deletion (node *);
void display (node *);
int main(){
    int ch;
    do{
        cout<<endl<<" menu for link list ";
        cout<<endl<<" 1. insertion ";
        cout<<endl<<" 2. deletion ";
        cout<<endl<<" 3. display ";
        cout<<endl<<endl<<"enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1: insertion(head);
                    break;
            case 2: deletion(head);
                    break;
            case 3: display(head);        
        }
    }while(ch>=1 && ch<=3);
}
void insertion(node *head){
   node *p=new node;
   cout<<endl<<"enter the data : ";
   cin>>p->data;
   p->next=NULL;
   if(head==NULL){
    head=p;
   }else{
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
        temp->next=p;
   }
}

void deletion(node *top){
    if(top==NULL){
        cout<<endl<<" the list is empety can not delete";
    }else{
        node*temp=top;
        while(temp!=NULL){
            temp=temp->next;
        }
    }
}
void display(node *head){
    if(head==NULL){
        cout<<endl<<" the link is empety ";
    }
    else{
        node*temp=head;
        while(temp!=NULL);
        cout<<temp->data<<" ";;
        temp=temp->next;

    }
}