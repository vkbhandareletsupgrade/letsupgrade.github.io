// The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters.

#include<iostream>
using namespace std;
int main()
{
    float meter,feet,inches,centimeter,Km;
    cout<<endl<<"The distance between two cities in Km = ";
    cin>>Km;
    meter= 1000*Km;
    feet= 3280.84*Km;
    inches=39370.1*Km;
    centimeter=100000*Km;
    cout<<endl<<"the distance in meter is = "<<meter;
    cout<<endl<<"the distance in feet is = "<<feet;
    cout<<endl<<"the distance in inches is = "<<inches;
    cout<<endl<<"the distance in centimeter is = "<<centimeter;
    
    




}