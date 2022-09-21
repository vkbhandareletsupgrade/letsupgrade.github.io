#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int i, j,row, col;

    cout<<endl<<"Enter number of rows : ";
    cin>>row;
    cout<<endl<<"Enter number of rows : ";
    cin>>col;
                                        // row=5, col=5   
    for(i=5; i>=1; i--){                // *****
        for(j=1; j<=i; j++){            // ****
            cout<<setw(3)<<"*";         // ***
        }                               // **
        cout<<endl;                     // *
    }
    
                                          //row=5, col=5   
    
    return 0;
}