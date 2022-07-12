#include<iostream>
using namespace std;
int main(){

    int num1, num2;
    char res;
    cout<<endl<<"Enter Number One : ";
    cin>>num1;
    cout<<endl<<"select any one + , -, *, /";
    cin>>res;
    cout<<endl<<"Enter Number Two : ";
    cin>>num2;


    switch (res){

        case '+':cout<<endl<<num1+num2;
                break;
        case '-':cout<<endl<<num1-num2;
                break;
        case '*':cout<<endl<<num1*num2;
                break;
        case '/':cout<<endl<<num1/num2;
                break;
        default:"Wrong Choice";
    }
    return 0;
}