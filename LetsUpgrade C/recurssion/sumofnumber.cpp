#include <iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }else{
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    cout<<endl<<"Enter the sum of numbers till ";
    cin >> n;
    int result = sum(n);
    cout<< endl<<"Enter the sum of numbers till " << n << " is " << result;
    return 0;
}
