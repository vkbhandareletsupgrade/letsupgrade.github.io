#include<iostream>
using namespace std;

int main(){

    int len,  area, peri;

    cout<<endl<<"Enter Length: ";
    cin>>len;
    
    area = len*len;   //formula for area of square
    peri = 4 * len;   // 
    cout<<endl<<"Area of square is : "<< area;
    cout<<endl<<"Perimeter of square is : "<< peri;

    return 0;
}