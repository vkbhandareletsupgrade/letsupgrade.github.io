#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i, j, n;
    cout<<endl<<"Enter the number : ";
    cin>>n;
    for(i=n; i>=1;i--){
        for(j=i;j<=5;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

// 5
// 45
// 345
// 2345
// 12345