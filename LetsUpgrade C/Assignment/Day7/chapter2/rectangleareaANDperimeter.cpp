// Given the length and breadth of a rectangle, write a program to
// find whether the area of the rectangle is greater than its
// perimeter. For example, the area of the rectangle with length = 5
// and breadth = 4 is greater than its perimeter.

#include<iostream>
using namespace std;
int main()
{
int l,b,area,peri;
cout<<endl<<"enter the length of rectangle: ";
cin>>l;
cout<<endl<<"enter the breadth of rectangle: ";
cin>>b;
area=l*b;
peri=2*(l+b);
if(area>peri){
    cout<<endl<<"the area  of the rectangle is greater than the peimeter";
}
else{
    cout<<endl<<"the area is not greater than perimeter";
}

}