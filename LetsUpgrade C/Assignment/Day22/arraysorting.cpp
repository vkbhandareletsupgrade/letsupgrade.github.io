#include<iostream>
using namespace std;
void sort(int [],int);
int main(){
    int *p, n,i;
    cout<<endl<<"enter the size of array : ";
    cin>>n;
    p=new int[n];
    for(i=0;i<=n-1;i++){
        cout<<endl<<"enter the elements in array : ";
        cin>>p[i];
    }
    cout<<endl;
    cout<<"the array before sorting : ";
    for(i=0;i<=n-1;i++){
        cout<<p[i]<<" ";
    }
    sort(p,n);
    cout<<endl<<"array after sorting : ";
    for(i=0;i<=n-1;i++){
        cout<<endl<<p[i];
    }
}
void sort( int a [],int s){
    int i,j,temp;
    for(i=0;i<=s-1;i++){
        for(j=i+1;j<=s-1;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}