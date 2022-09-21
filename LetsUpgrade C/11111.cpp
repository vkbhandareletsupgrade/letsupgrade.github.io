#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int i, j, n;
    cout<<endl<<"enter number: ";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<=5; j++){
            cout<<setw(5)<<(j%2);
        }
        cout<<endl;
    }
    return 0;
}