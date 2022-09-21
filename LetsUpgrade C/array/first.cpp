#include<iostream>
using namespace std;
int main(){
    int a[5],b[5],c[5],i;

    for(i=0; i<5; i++)
    {
        cout<<endl<<"Enter  A : ";
        cin>>a[i];
        c[i]=a[i];
    }
    for(i=0; i<5; i++)
    {
        cout<<endl<<"Enter B : ";
        cin>>b[i];
        c[i]+=b[i];
    }
    for(i=0; i<5; i++)
    {
        cout<<endl<<a[i]<<" "<<b[i]<<" "<<c[i];
        
    }
    return 0;
}