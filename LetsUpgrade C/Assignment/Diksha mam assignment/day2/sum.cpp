#include<iostream>
using namespace std;
int sum(int [],int);
int main(){
    int *p,n,i;
    cout<<endl<<"enter the size of array :";
    cin>>n;
    p=new int[n];
    for(i=0;i<=n-1;i++){
        cout<<endl<<"enter the elements of array ["<<i<<"] : ";
        cin>>p[i];
    }
        int x=sum(p,n);
        cout<<endl<<"the sum of elements in array = "<<x; 

}
int sum(int p[],int n){
    int i,s=0;
    for(i=0;i<=n-1;i++){
        s=s+p[i];
    }
    return s;
}