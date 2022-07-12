#include<iostream>
using namespace std;
int main(){

    int i,n;
    cout<<endl<<"Enter the number :";
    cin>>n;

    i=1;
    while(i<=n){
        if(i%2!=0){
            cout<<endl<<i;
        }
        i++;
    }
    return 0;

}