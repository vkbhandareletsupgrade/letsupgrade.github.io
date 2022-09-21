#include<iostream>
using namespace std;
int main(){
    int i, n, counter=0;
    for(n=1; n<=100; n++)
    {
        counter=0;
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                counter++;
            }
        }
        if(counter==2)
        {
            cout<<ends<<n;
        }
    }
    return 0;
}