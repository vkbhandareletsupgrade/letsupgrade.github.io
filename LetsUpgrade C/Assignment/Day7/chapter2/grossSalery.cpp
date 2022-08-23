// Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate
// his gross salary.

#include<iostream>
using namespace std;
int main()
{
  int bs,alc,hr,Gs;
  cout<<endl<<"enter the basic salary : " ;
  cin>>bs;
  alc=(float)40/100*bs;
  hr=(float)20/100*bs;
Gs=(bs+hr+alc);
cout<<endl<<"gross salary is = "<<Gs;
return 0;

}