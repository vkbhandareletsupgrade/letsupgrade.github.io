#include<iostream>
using namespace std;
int main(){

    int a[5],i ,zero=0,pos=0,neg=0,even=0,odd=0;
    for(i=0; i<5; i++)
    {
        cout<<endl<<"Enter the number : ";
        cin>>a[i];
            if(a[i]==0)
                {
                    zero++;
                }
            else if(a[i]<0)
                {
                    neg++;
                }
            else if(a[i]>=1){
                    pos++;
                }
    }
        cout<<endl<<"zeros are"<<zero;
        cout<<endl<<"Positives are"<<pos;
        cout<<endl<<"Negatives are"<<neg;
        cout<<endl<<"Even are"<<even;
        cout<<endl<<"odd are"<<odd;
    return 0;
}