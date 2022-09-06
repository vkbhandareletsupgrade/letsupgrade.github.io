#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter a n here ";
    cin>>n;
    int k ;
    cout<<"enter a index which u want to add";
    cin>>k;

    int *arr = new int [n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int *a;
    for(int i = 0; i<=k; i++){
            a=&arr[i];
    }
    cout<<a<<endl;
    cout<<&arr[k]<<endl;
}