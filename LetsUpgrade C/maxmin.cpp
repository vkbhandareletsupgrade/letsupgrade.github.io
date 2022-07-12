#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;

    cout<<endl<<"Enter First Number ";
    cin>> num1;
    cout<<endl<<"Enter Second Number ";
    cin>> num2;
    cout<<endl<<"Enter Third Number ";
    cin>> num3;
    

    if(num1>num2 && num1>num3)
    {
        cout<<endl<<"Number 1 is Greatest ";
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<endl<<"Number 2 is Greatest ";
    }
    else if(num3>num1 && num3>num2)
    {
        cout<<endl<<"Number 3 is Greatest ";
    }
}