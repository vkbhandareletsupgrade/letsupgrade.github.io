#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i, j, n;
    cout<<endl<<"Enter the number : ";
    cin>>n;
    for(i=5; i>=1;i--){
        for(j=5; j<=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}