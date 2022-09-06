#include<iostream>
using namespace std;
int main(){
    int *p, n,i,sum=0;
    cout<<endl<<" enter the size of array : ";
    cin>>n;
    p=new int[n];
    for(i=0;i<n;i++){
        cout<<endl<<" enter the elements ["<<i<<"] : ";
        cin>>p[i];
    }
    for(i=0;i<=n-1;i++){
        sum=sum+p[i];
    }
    cout<<endl<<"sum of elements in array is = "<<sum;
}