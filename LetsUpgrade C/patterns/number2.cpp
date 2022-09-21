#include<iostream>
using namespace std;
int main(){

    int i, j, n;
    cout<<endl<<"Enter the number : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}



// output
// 1
// 12
// 123
// 1234
// 12345