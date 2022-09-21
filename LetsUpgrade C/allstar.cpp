#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,j,n;
    cout<<endl<<"Enter a number : ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5; j++)  //keep j<=n tp print till i/p ,, j<=5 to print colum=5
        {
            cout<<setw(3)<<"*";
        }
        cout<<endl;
    }
    return 0;
}