// If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this
// number.

#include<iostream>
using namespace std;
int main(){
int a,b,sum,sum1,sum3;
cout<<endl<<"enter four digit number : ";
cin>>a;
sum1=a%10;
while(a>0){
    b=a%10;
    sum=b;
    a=a/10;
    
    

}

cout<<endl<<"the first number is = "<<sum;
cout<<endl<<"the last number is = "<<sum1;
sum3=sum+sum1;
cout<<endl<<" the sum of first and last digit is ="<<sum3;

}