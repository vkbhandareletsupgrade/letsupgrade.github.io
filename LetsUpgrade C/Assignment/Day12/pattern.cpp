#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<endl<<"enter the limit of pattern : ";
    cin>>n;
    for(i=1; i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2==0){
                if(j%2==0)
                {
                cout<<"1"<<"   ";
                }
                else
                {
                    cout<<"0"<<"   ";
                }

            }
            else
            {
                if(j%2==0){

            
                cout<<"0"<<"   ";
                }
                else{
                    cout<<"1"<<"   ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
