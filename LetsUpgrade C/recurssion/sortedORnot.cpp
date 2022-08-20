//check if array is sorted or not using recurssion

#include<iostream>
using namespace std;

bool sort(int arr[], int n){

    if(n==1){
        return true;
    }
    bool restArr = sort(arr+1 , n-1);
    return(arr[0]<arr[1] && restArr);       
}

int main(){

    int arr[] = {1,2,3,4,5};
    cout<<endl<<sort(arr,5);
}