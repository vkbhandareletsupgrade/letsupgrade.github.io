#include<iostream>
using namespace std;
int main(){

    int i, j, n=5;

    for(i=1; i<=n; i++){
        for(j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}


// o/p:
// 1
// 21
// 321
// 4321
// 54321