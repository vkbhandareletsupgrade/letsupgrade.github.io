#include<iostream>
using namespace std;
int main(){
    int a[3][4]={{2,3,4,5},{9,6,5,4},{2,1,6,5}};
    cout<<endl<<(a+0);
     cout<<endl<<(a+0)+1;
      cout<<endl<<*(*(a+0)+4);
       cout<<endl<<(*(a+1)+2);
        cout<<endl<<*(*(a+1)+3);
         cout<<endl<<(a+2);

}