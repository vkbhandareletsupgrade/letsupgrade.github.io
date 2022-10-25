#include<iostream>
using namespace std;
int main(){
    int a[3][3]={{3,4,5},{6,7,8},{9,10,11}};
    int b[3][3]={{8,9,10},{2,8,6},{5,4,3}};
    int c[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}