//pascal triangle
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[20][20],i,j,n,sp=40;

    cout<<endl<<"enter the rows :";
    cin>>n;
    for(i=0;i<n;i++){

        for(j=0;j<sp;j++)
            cout<<" ";

        for(j=0;j<=i;j++){
        if(j==0 || j==i)
            a[i][j]=1;
        else
            a[i][j]=a[i-1][j]+a[i-1][j-1];
            cout<<setw(4)<<a[i][j];
        }
        sp=sp-2;
        cout<<endl;
    }
    
}