// If the total selling price of 15 items and the total profit earned
// on them is input through the keyboard, write a program to
// find the cost price of one item.
#include<iostream>
using namespace std;
int main(){
    float sp,cp,profit,n,a,b;
    cout<<endl<<"total number of itom n = ";
    cin>>n;
    cout<<endl<<"s.p of n itom = ";
    cin>>sp;
    a=sp/n;
    
    cout<<endl<<"profit earn on selling n item = ";
    cin>>profit;
    b=profit/n;
    
    cp=(float)a-b;
    cout<<endl<<"profit earn on one itom = "<<b;
    cout<<endl<<"sp of 1 itom ="<<a;
    cout<<endl<<"cost price of 1 items = "<<cp;
}