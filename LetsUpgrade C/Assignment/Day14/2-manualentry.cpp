#include<iostream>
using namespace std;
int main(){
    int a[8],i,sum=0,count=0;
    for(i=0;i<=8-1;i++){
        cout<<endl<<"enter the values in array :";
        cin>>a[i];
    }
    for(i=0;i<=8-1;i++){
        cout<<endl<<"the values of array = "<<a[i];
        sum=sum+a[i];
        count++;
    }
    cout<<endl<<"the sum of arr ="<<sum;
    cout<<endl<<"the avg of arr ="<<(float)sum/count;
}