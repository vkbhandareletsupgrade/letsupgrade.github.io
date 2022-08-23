// Any year is input through the keyboard. Write a program to
// determine whether the year is a leap year or not.
// (Hint: Use the % (modulus) operator)

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<endl<<"enter any year :";
    cin>>year;
    if(year%400==0){
      cout<<endl<<"the year is a leap year";  
    }
    else if(year%100!=0 && year%4==0){
        cout<<endl<<"the year is a leap year";
    }
    else{
        cout<<endl<<"Not a leap year";
    }


}