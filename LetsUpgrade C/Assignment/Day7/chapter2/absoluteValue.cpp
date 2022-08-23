// Find the absolute value of a number entered through the
// keyboard.

#include<iostream>
using namespace std;
int main()
{
int a,abs;
cout<<endl<<"enter a number: ";
cin>>a;
if(a<0){
    abs=a*-1;
    cout<<endl<<"absolute value of number is ="<<abs;
}else{
    cout<<endl<<"absolute value of number is ="<<a;
}

}