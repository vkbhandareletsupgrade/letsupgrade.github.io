// If a five-digit number is input through the keyboard, write a
// program to print a new number by adding one to each of its
// digits. For example if the number that is input is 12391 then
// the output should be displayed as 23402.If a five-digit number is input through the keyboard, write a
// program to print a new number by adding one to each of its
// digits. For example if the number that is input is 12391 then
// the output should be displayed as 23402.

#include<iostream>
using namespace std;
int main(){
int a,b,sum,rev;
cout<<endl<<"enter five-digit number :";
cin>>a;
while(a>0){
  sum=0;
b=a%10;
sum=sum+b+1;
a=a/10;
cout<<endl<<"the new number is ="<<sum;
}
rev=sum;
while(rev>0)

}