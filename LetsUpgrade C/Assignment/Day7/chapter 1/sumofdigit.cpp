// If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits.
// (Hint: Use the modulus operator ‘%’)
#include<iostream>;
using namespace std;
int main(){
    int a,b,sum=0;
    cout<<endl<<"Enter a five digit number : ";
    cin>>b;
    while(b>0){
        a=b%10;
        sum=sum+a;
        b=b/10;
    }

cout<<endl<<" sum of digit is ="<<sum;
return 0;
}




