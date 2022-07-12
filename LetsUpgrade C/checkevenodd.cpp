#include<iostream>
using namespace std;
int main(){

    int i,n,e=0,o=0;
    i=1;
    while(i<=5){
        cout<<endl<<"Enter number : ";
        cin>>n;
        
        if(n%2==0){
            e++;
        }else{
            o++;
        }
        i++;
    }
    cout<<endl<<'totaleven'<<e;
    cout<<endl<<'totalodd'<<o;
    return 0;
}


//for / while  assignment---  