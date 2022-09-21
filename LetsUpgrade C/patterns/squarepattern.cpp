#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int i, j,row, col;

    cout<<endl<<"Enter number of rows : ";
    cin>>row;
    cout<<endl<<"Enter number of rows : ";
    cin>>col;
                                         //row=5, col=5   
    for(i=1; i<=row; i++){               //*****
        for(j=1; j<=col; j++){          // *****
            cout<<"* ";                 // *****
        }                               // *****
        cout<<endl;                     // *****
    }
    cout<<endl;
    // for row -all same  11111 22222...n
      for(i=1; i<=row; i++){         
        for(j=1; j<=col; j++){
            cout<<setw(3)<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    // for column- all same 12345 12345...n
    for(i=1; i<=row; i++){         
        for(j=1; j<=col; j++){
            cout<<setw(3)<<j;
        }
        cout<<endl;
    }
    return 0;
}