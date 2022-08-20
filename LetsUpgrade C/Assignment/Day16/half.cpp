//half triangle
#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cout<<endl<<"enter the limit od pascal triangle :";
    cin>>n;
    for(i=1;i<=n;i++){
        k=1;
    for(j=1;j<=i;j++){
        cout<<k<<" ";
        k=k*(i-j)/j;
        
    }
    cout<<endl;
    }

}