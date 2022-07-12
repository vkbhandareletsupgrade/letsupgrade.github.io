#include<iostream>
using namespace std;
int main(){
    int i,num;

    cout<<endl<<"Enter the number till : ";
    cin>>num;

    // using while
    //i=1;
    // while(i<=num){
    //     cout<<endl<<i;
    //     i++;
    // }


    //print num using for 
    for(i=1; i<=num; i++){
        cout<<endl<<i;
    }
    return 0;
}