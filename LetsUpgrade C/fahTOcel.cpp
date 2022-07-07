#include<iostream>
using namespace std;
int main(){

    float cel, fah;
    
    cout<<endl<<"Enter Fahrenheit : ";
    cin>>fah;

    cel = (fah-32)*5/9;

    cout<<endl<< "Fah to Cel : "<<cel;

    return 0;
}