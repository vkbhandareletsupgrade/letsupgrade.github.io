#include<iostream>
using namespace std;
int main(){
    
    int i,j,k;
    
    for(i=2; i>1; i--){
       for(j=3; j>i; j--){
        for(k=4;k>=1;k--){
            cout<<endl<<k+j+i;
        }
        
       }
    }
    return 0;
}