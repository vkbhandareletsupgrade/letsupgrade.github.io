#include<iostream>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3,m,n;
    cout<<endl<<"enter the points (x1, y1):";
    cin>>x1,cin>>y1;
    cout<<endl<<"enter the points (x2, y2):";
    cin>>x2,cin>>y2;
    cout<<endl<<"enter the points (x3, y3):";
    cin>>x3,cin>>y3;
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n){
        cout<<endl<<"all the three points lies in straigth line";
    }
    else{
        cout<<endl<<" all the points are not in same line";
    }

}