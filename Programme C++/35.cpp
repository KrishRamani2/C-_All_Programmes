#include <iostream>
using namespace std;
int main()
{
    cout<<"Menu \n";
    cout<<"1.Addition \n"<<"2.Subtraction \n"<<"3.Division \n"<<"4.Multiplication \n";
    int option;
    cout<<"Enter your choice \n";
    cin>>option;
    int a,b,c;
    cout<<"Enter two numbers a and b";
    cin>>a>>b;
    switch(option)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a/b;
        break;
        case 4:c=a*b;
        break;
        default:cout<<"Invalid Choice";
    }
    cout<<"Result is "<<" "<<c;
    return 0;
}

