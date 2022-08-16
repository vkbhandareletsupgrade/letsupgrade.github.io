#include<iostream>
using namespace std;
int main(){

    int i, n;
    float avg,sum=0;
    for(i=1;i<=10;i++){
        cout<<endl<<"Enter the number : ";
        cin>>n;
        sum+=n;
        avg=sum/10;
    }
    cout<<endl<<"The average of 10 numbers is "<<avg;
    return 0;
}