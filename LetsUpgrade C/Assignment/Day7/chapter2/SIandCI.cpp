// If cost price and selling price of an item is input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit
// he made or loss he incurred.
#include<iostream>
using namespace std;
int main()
{
int cp,sp,d;
cout<<endl<<"inter the value of cost price: ";
cin>>cp;
cout<<endl<<"enter the value of selling price: ";
cin>>sp;
d=sp-cp;
if(d>0){
cout<<endl<<"the profit is ="<<d;

}
else{
    cout<<endl<<"the loss is ="<<d;
}

}