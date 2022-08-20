#include<iostream>
using namespace std;
int summandrev(int ,int *,int *);
int main(){
    int n,x,y;
    cout<<endl<<"enter any number : ";
    cin>>n;
   
    summandrev(n,&x,&y);
    cout<<endl<<"the sum of number ="<<x;
    cout<<endl<<"the reverse of number ="<<y;

}
int summandrev(int a,int *p,int*q){
    int rem;
    *p=0;
    *q=0;
    
    while(a>0){
        rem=a%10;
        *p=*p+rem;
        *q=(*q *10)+rem;
        a=a/10;

    }
   

}
