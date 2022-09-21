#include<iostream>
using namespace std;
int main(){
    int i, j,n=5;
    
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
// o/p=
// 1
// 12
// 123
// 1234
// 12345