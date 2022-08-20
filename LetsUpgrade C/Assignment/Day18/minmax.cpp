#include<iostream>
using namespace std;

int max(int a[],int size);
int min(int a[], int size);
int rev(int a[],int size);
int main(){

    int a[5],i;
    for(i=0;i<=5-1;i++){
        cout<<endl<<"enter the elements of array : ";
        cin>>a[i];
    }

       int maximum=max(a,5);
       int minimum=min(a,5);
       int reverse=rev(a,5);
    //    cout<<"maximun of array = "<<max(a,5);
    cout<<endl;
    cout<<"maximun of array = "<<maximum<<endl;
    cout<<"minimum of array = "<<minimum<<endl;
    // cout<<"reverse of array ="<<reverse;
    
    
}
int max(int b[],int size){
    int i,max;
    max=b[0];
  
    for(i=1;i<=5-1;i++){
        if(max<b[i])
        max=b[i];
       

    }
     return max;

}
int min(int a[],int size){
    int i,min;
    min=a[0];
  
    for(i=1;i<=5-1;i++){
        if(min>a[i])
        min=a[i];
       

    }
     return min;
}
int rev(int a[],int size){
    int i;
    cout<<endl<<"the reverse of array is  ";
    for(i=size-1;i>=0;i--){
        cout<<a[i];    
    }
    return 0;
    }
    
