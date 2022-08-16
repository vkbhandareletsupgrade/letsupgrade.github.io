//fibonacci

#include<iostream>
using namespace std;
int main(){
int a=0,b=1,c,e,d;
cout<<endl<<" enter the limit of series  : ";
cin>>d;
cout<<a<<"  ,  " <<b<<"  ,  ";
  for(c=1;c<=d-2;c++){
    e=a+b;
    a=b;
    b=e;
    cout<<e<<"  ,  ";
  }  
   return 0; 
}
