// In a town, the percentage of men is 52. The percentage of
// total literacy is 48. If total percentage of literate men is 35 of
// the total population, write a program to find the total number of illiterate men and women if the population of the town is
// 80,000.
#include<iostream>
using namespace std;
int main(){
    float total,man,litman,woman,litwoman,illitman,illitwoman,literacy,illiteracy,sum;
    cout<<endl<<"total population of town is = ";
    cin>>total;
    man=total*52/100;
    literacy=total*48/100;
    litman=total*35/100;
    illitman=man-litman;
    illiteracy=total-literacy;
    illitwoman=illiteracy-illitman;
    sum=illitman+illitwoman;
    cout<<endl<<"total number of illiterate man and woman are : "<<sum;



}