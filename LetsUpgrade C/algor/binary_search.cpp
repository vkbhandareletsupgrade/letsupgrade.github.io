#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int a[6]= {2,1,5,7,4,3};
    int i,n;
    cout<<"Enter the number you want to find ? ";
    cin>>n;
    sort(a, a + 6);

    if(binary_search(a, a + 6, n)){
        cout<<n<<" is found";
    }else{
        cout<<n<<" is not found";
    }
}