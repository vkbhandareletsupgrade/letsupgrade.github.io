// If a five-digit number is input through the keyboard, write a
// program to reverse the number.
#include<iostream>
using namespace std;
int main(){
    int a,b,rev=0;
    cout<<endl<<"Enter a five digit number : ";
    cin>>b;
    while(b>0){
        a=b%10;
        rev=rev*10+a;
        b=b/10;
    }

cout<<endl<<" sum of digit is ="<<rev;
return 0;
}
