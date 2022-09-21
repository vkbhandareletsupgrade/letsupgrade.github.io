#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[10] = {5,1,9,7,2,8,4,6,3,0};
    int i;
    sort(a, a + 10); // to sort === sort(starint array , starting array + length array)
    for(i=0; i<10; i++){
        cout<<a[i]<<" ";
    }
}