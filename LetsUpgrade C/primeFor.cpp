#include<iostream>
using namespace std;
int main(){
    int i, n, counter=0;   //take counter=0 to count how many time n is divisible..
    cout<<endl<<"Enter the number : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            counter++;
        }
    }

    if(counter==2)
    {
        cout<<endl<<"Its a prime number";
    }
    else
    {
        cout<<endl<<"Its not a prime number";
    }
    return 0;
}