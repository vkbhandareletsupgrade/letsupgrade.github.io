// If the marks obtained by a student in five different subjects
// are input through the keyboard, find out the aggregate marks
// and percentage marks obtained by the student. Assume that
// the maximum marks that can be obtained by a student in each
// subject is 100.

#include<iostream>;
using namespace std;
int main(){
float sub1,sub2,sub3,sub4,sub5,aggr,per;
int max,n;
cout<<endl<<"enter the how many subjectes are there = ";
cin>>n;
cout<<endl<<"enter the marks obtained in sub1= ";
cin>>sub1;
cout<<endl<<"enter the marks obtained in sub2= ";
cin>>sub2;
cout<<endl<<"enter the marks obtained in sub3= ";
cin>>sub3;
cout<<endl<<"enter the marks obtained in sub4= ";
cin>>sub4;
cout<<endl<<"enter the marks obtained in sub5= ";
cin>>sub5;
max= 100*n;
aggr= sub1+sub2+sub3+sub4+sub5;
per=(float)aggr/max*100;
cout<<endl<<"the aggrigate marks is ="<<aggr;
cout<<endl<<"the percentage marks is ="<<per;
}