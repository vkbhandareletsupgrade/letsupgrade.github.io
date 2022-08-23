// If the ages of Ram, Shyam and Ajay are input through the
// keyboard, write a program to determine the youngest of the
// three.
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<endl<<"enter the age of Ram: ";
cin>>a;
cout<<endl<<"enter the age of Shyam: ";
cin>>b;
cout<<endl<<"enter the age of Ajay: ";
cin>>c;
if(a<b && a<c){
    cout<<endl<<"Ram is youngest";
}
else if(b<a && b<c){
    cout<<endl<<"Shyam is youngest";
}
else if(c<a && c<b){
    cout<<endl<<"Ajay is youngest";
}
}