#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int i,j,n=25;
 

    for(i=1; i<=n; i++)
    {
        for(j=2; j<=5; j++)
        {
            cout<<setw(3)<<j; //this i%2 will check row i =1 then 1%2=1 then print 1 if not then 0
        }
        cout<<endl;
    }
    return 0;
}