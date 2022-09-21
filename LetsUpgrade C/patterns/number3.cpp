#include<iostream>
using namespace std;
int main(){

    int i, j, n;
    cout<<endl<<"Enter the number : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=5; j>=i; j--)
        {
               cout<<i;
        }
        cout<<endl;
    }
}

// output
//   11111
//   2222
//   333
//   22
//   1