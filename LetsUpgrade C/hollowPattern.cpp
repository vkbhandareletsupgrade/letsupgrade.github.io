#include<iostream>
using namespace std;
int main(){

    int i, j,n;
    cout<<endl<<"ENTER THE NUMBER OF ROW YOU WANT: ";
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
        {

            if(i == 0 || i == n-1 || j == 0 || j == n-1 ) //if i,j is 0 &i ,j equal to n-1 then print
            {
                cout<<"*";
            }   
            else
            {
                cout<<" ";
            }
        }
       cout<<endl;
    }
}