#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int i, j,row, col;

    cout<<endl<<"Enter number of rows : ";
    cin>>row;
    cout<<endl<<"Enter number of rows : ";
    cin>>col;
    for(i=5; i>=1; i--){               //  *
        for(j=1; j<=i; j++){            // **
            cout<<setw(3)<<"*";         // ***
        }                               // ****
        cout<<endl;                     // *****
    }

}