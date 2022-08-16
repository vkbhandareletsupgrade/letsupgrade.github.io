#include<iostream>
using namespace std;
int main(){

    int i, n,mult;
    cout<<endl<<"Multiplication table of : ";
    cin>>n;
    for(i=1; i<=10;i++){
        mult = n * i;
        cout<<endl<<mult;
    }
    
    return 0;
}