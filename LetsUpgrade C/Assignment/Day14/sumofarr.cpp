#include<iostream>
using namespace std;
int main(){
    int a[10],i,sum=0;
    for(i=0;i<=10-1;i++){
    cout<<endl<<"enter the values : ";
    cin>>a[i];
    }
    for(i=0;i<=10-1;i++){
        sum=sum+a[i];

    }
    cout<<endl<<"sum of arr ="<<sum;
   
}