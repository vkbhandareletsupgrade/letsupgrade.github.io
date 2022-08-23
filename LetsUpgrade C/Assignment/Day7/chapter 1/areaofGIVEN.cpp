// The length & breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the
// area & perimeter of the rectangle, and the area &
// circumference of the circle.
#include<iostream>
using namespace std;
int main(){
    float l,b,r,area,peri,circum,aoc;
    cout<<endl<<"enter the length of the rectangle :";
    cin>>l;
    cout<<endl<<"enter the breadth of rectangl :";
    cin>>b;
    cout<<endl<<"enter the radius of circle :";
    cin>>r;
    area=l*b;
    peri=2*(l+b);
    aoc=3.14*r*r;
    circum=2*3.14*r;

    cout<<endl<<"the area of rectangle is = "<<area;
    cout<<endl<<"the perimeter of rectangle is = "<<peri;
    cout<<endl<<"the area of circle is = "<<aoc;
    cout<<endl<<"the circumference of rectangle is = "<<circum;
}
