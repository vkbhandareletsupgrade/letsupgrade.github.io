// Given a point (x, y), write a program to find out if it lies on the
// x-axis, y-axis or at the origin, viz. (0, 0).
#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<endl<<"enter a point in (x,y): ";
    cin>>x,cin>>y;
    if(x==0 && y==0){
        cout<<endl<<"point lies at the origin";
    }
    else if(x==0)
    {
       cout<<endl<<"point lies on y-axis";
    }
    else if( y==0){
        cout<<endl<<"point lies on x-axis";
    }
    else{
        cout<<endl<<"point lies on both axis";
    }
}