#include<iostream>
using namespace std;

int main()
{
    int ar, pr, len, br;

    cout<<endl<<"Enter Length : ";
    cin>>len;
    cout<<endl<<"Enter Breadth : ";
    cin>>br;
    

    ar = len * br; // formula to get area 
    pr = 2 * (len + br); // to get perimeter

    cout<<endl<<"Area of rectangle is : "<<ar;
    cout<<endl<<"Perimeter of rectangle is : "<<pr;

    return 0;
}