#include<iostream>
using namespace std;
int main(){
    int i,j,n,e,sum;
    cout<<endl<<"enter the limit to check perfect numbers : ";
    cin>>n;
    e=n;
    for(i=1;i<=e;i++){
        sum=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
            else{
                sum=sum;
            }
            
        }
        if(sum==i){
                cout<<endl<<i<<" ="<<"the number is perfect number ";
            }
            else{
                 cout<<endl<<i<<" ="<<"not a perfect number ";
            }
    }
    
}