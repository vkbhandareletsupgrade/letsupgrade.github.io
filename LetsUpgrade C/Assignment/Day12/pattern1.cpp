#include<iostream>
using namespace std;
 int main(){
    int i, j, n,sum;
    cout<<endl<<"enter the the limit : ";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        
        for(j=1;j<=n;j++){
            sum++;
    
            cout<<sum<<"    ";
        }
        
        cout<<endl;

    }
 }