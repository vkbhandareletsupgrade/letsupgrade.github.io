#include<iostream>
using namespace std;
int main(){
     long a,b,d=0,e,f,i,count=0;
     int pro,g;
     cout<<"enter any number =";
     cin>>a;
     e=a;
     g=a;

     while(e>0){
          f=e%10;
          count++;
          e=e/10;
          
     }
     // cout<<count;
     while(g>0){
     b=g%10;
     pro=1;
     for(i=1;i<=count;i++){
          pro=pro*b;
     }
     d=d+pro;
     g=g/10;
     }
     if(d==a)
     cout<<endl<<" number is armstrong";
     else
     cout<<endl<<"number is not armstrong";
    return 0;
}
