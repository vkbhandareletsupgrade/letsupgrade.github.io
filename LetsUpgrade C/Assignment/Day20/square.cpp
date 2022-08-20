#include<iostream>
using namespace std;
int areaandper(int ,int*,int*);
int main(){
    int n,a,p;
    cout<<endl<<"enter the length of square : ";
    cin>>n;
    areaandper(n,&a,&p);
    cout<<endl<<"the area of square = "<<a;
    cout<<endl<<"the peri of square = "<<p;


}
int areaandper(int k,int *b,int *c){
    *b=k*k;
    *c=4*k;

}
