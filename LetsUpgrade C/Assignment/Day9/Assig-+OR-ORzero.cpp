#include<iostream>
using namespace std;
int main(){

    int i=1, n, pos=0, neg=0, zero=0;

    while(i<=10){
        cout<<endl<<"Enter the number : ";
        cin>>n;
        if(n>0){
            pos++;
        }else if(n<0){
            neg++;
        } else{
            zero++;
        }
        i++;
    }
    cout<<endl<<"Total Number Of Zero's Are : "<<zero;
    cout<<endl<<"Total Number Of Positive Numbers's Are : "<<pos;
    cout<<endl<<"Total Number Of Negative Numbers's Are : "<<neg;
}