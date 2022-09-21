#include<iostream>
using namespace std;
int main(){

    int p[5] = {100,77,85,69,87};
    int c[5] = {100,87,82,64,67};
    int m[5] = {100,56,45,89,77};

    for(int i=0; i<5; i++)
    {
        cout<<endl<<"Students "<< i+1 <<" has "<<(p[i]+c[i]+m[i])/3 <<"%";
    }
    return 0;
}