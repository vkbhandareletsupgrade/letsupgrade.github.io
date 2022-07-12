#include<iostream>
using namespace std;
int main(){
   int i=1, n, even=0, odd=0; ///variable declaration

   while(i<=5){ // check condition that increase i till 5
    cout<<endl<<"Enter a number : ";
    cin>>n;
        if(n%2==0){ // check if n is even or not
            even++;// if even then even variable counter increase by 1.
        }
        else{
            odd++;//if not then odd variable counter increase by 1.
        }
        i++;
   }
    cout<<endl<<"Total Even Numbers Are : "<<even;
    cout<<endl<<"Total Odd Numbers Are : "<<odd;
    return 0;
}


    // for(i=0; i<=n; i++){
    //     if(i%2==0){
    //         cout<<endl<<i;
    //     }
    // }
//     return 0;
// }