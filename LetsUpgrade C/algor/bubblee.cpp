#include<iostream>
using namespace std;

void bubble(int a[]){
    int temp,i,j;
    for(i=0; i<5; i++){
        for(j=0; j<(5-i-1); j++)
        {
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    int i, j, arr[5];
    for(i=0; i<5; i++){
        cout<<endl<<"Enter the number : ";
        cin>>arr[i];
    }
    cout<<"Before Sorting : ";
    for(i=0; i<5; i++){
       cout<<arr[i]<<ends;
    }
    bubble(arr);
    cout<<endl<<"After Sorting : ";
    for(i=0; i<5; i++){
       cout<<arr[i]<<ends;
    }
    return 0;
}
 