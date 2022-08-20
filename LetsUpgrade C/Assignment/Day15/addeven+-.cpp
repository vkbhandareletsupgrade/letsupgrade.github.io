// WAP to counting even odd positive negative and zero in array of 10 elements
#include<iostream>
using namespace std;
int main(){
    int a[10],i,p=0,n=0,z=0,e=0,o=0;
    for(i=0;i<=10-1;i++){
    cout<<endl<<"enter the elements in array :";
    cin>>a[i];
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }        
         if(a[i]==0){
            z++;
        }
        else if(a[i]%2!=0){
            o++;
        }
        else if(a[i]%2==0){
            e++;
        }
    }
    cout<<endl<<"the negative elements in array ="<<n;
    cout<<endl<<"the positive elements in array ="<<p;
    cout<<endl<<"the even elements in array ="<<e;
    cout<<endl<<"the odd elements in array ="<<o;
    cout<<endl<<"the zero elements in array ="<<z;
}