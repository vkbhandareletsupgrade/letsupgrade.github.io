// Write a program to check whether a triangle is valid or not,
// when the three angles of the triangle are entered through the
// keyboard. A triangle is valid if the sum of all the three angles
// is equal to 180 degrees.

#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<endl<<"enter the first angle of triangle: ";
cin>>a;
cout<<endl<<"enter the second angle of triangle: ";
cin>>b;
cout<<endl<<"enter the third angle of triangle: ";
cin>>c;
if(a+b+c==180){
cout<<endl<<"the triangle is valid";
}
else{
    cout<<endl<<"the triangle is not valid";
}
}