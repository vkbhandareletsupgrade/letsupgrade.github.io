#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int i, j, n;

    cout<<endl<<"Enter a number : ";
    cin>>n;

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=5; j++)
        {
            cout<<setw(5)<<(i%2);
        }
        cout<<endl;
    }
    return 0;
}