#include<iostream>
using namespace std;

void bubblesort(int a[]){
    for(int i=0; i<5; i++){
        for(int j=0; j<(5-i-1); j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j+1] = temp;
            }
        }
    }

}

int main(){
    int i,j,temp;
    int arr[5];
    //taking input
    
    for(i=0; i<5; i++){
        cout<<endl<<"Enter the array elements : ";
        cin>>arr[i];
    }
    //array before sorting
    cout<<endl<<"Array before sorting : ";
    for(i=0; i<5; i++){
        cout<<arr[i];
    }
    bubblesort(arr);  //sorting here by function
    //array after sorting
    cout<<endl<<"Array After sorting : ";
    for(i=0; i<5; i++){
        cout<<arr[i];
    }

}