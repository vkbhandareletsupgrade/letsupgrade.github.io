#include<iostream>
using namespace std;
int main(){

    int i,j,n,counter=0;
    for(n=1; n<=100; n++ ){
        counter=0;
        for(i=1; i<=n; i++){
            if(n%i==0){
                counter++;
            }
    }
    if(counter==2){
            cout<<endl<<i;
        }
    }
    return 0;
}