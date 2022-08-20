#include<iostream>
using namespace std;
int prime(int ,int*);
int main(){
    int n,p;
    cout<<endl<<"enter any number : ";
    cin>>n;
    prime(n,&p);
    if(p==2){
        cout<<endl<<"this is prime number ";
    }else{
        cout<<endl<<"Not a prime number  ";
    }
}
int prime(int a,int*b){
    int i,count=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    *b=count;
}