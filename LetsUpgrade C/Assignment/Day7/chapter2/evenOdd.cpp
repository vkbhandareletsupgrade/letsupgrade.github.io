// Any integer is input through the keyboard. Write a program to
// find out whether it is an odd number or even number.

#include<iostream>
using namespace std;
int main()
{
int a;
cout<<endl<<"enter any number: ";
cin>>a;
if(a%2==0){
    cout<<endl<<"the number is even number";
}
else{

    cout<<endl<<"the number is odd number";
}

}