// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine
// whether the original and reversed numbers are equal or not.

#include<iostream>
using namespace std;
int main()
{
int num,org,rev,a,b,c,d,e;
cout<<endl<<"enter any five digit number: ";
cin>>num;
org=num;
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;
num=num/10;
d=num%10;
num=num/10;
e=num%10;
rev=(a*10000+b*1000+c*100+d*10+e*1);
cout<<endl<<"the reverse of the original number is ="<<rev;
if(org==rev){
    cout<<endl<<"original and reverse number are equal";
}
else{
    cout<<endl<<"original and reverse number are not equal";
}


}