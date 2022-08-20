//WAP tp find min max in array
#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j,n,max,min;
    for(i=0;i<=3-1;i++){
        for(j=0;j<=3-1;j++){
            cout<<endl<<"enter the elements in array : ";
            cin>>a[i][j];
        }
    }
    max=a[0][0];
    min=a[0][0];
    for(i=0;i<=3-1;i++){
        for(j=0;j<=3-1;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
           if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    cout<<endl;
    cout<<endl<<"the maximum in array is ="<<max;
    cout<<endl<<"the minimum in array is ="<<min;

}