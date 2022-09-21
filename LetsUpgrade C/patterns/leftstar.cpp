#include<iostream>
using namespace std;
int main(){
    int i,j,n=6
    ;
    for(i=1;i<n;i++){
        for(j=1;j<=n-1-i;j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<i<<ends; //add ends to add space and create triangle
        }
        cout<<endl;
    }

}