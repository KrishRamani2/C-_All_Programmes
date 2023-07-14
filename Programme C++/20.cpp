#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two number";
    cin>>a>>b;
    if(b==0)
    {
        cout<<"Divison by zero";
    }
    else
    {
        c=a/b;
        cout<<"Divison of two numbers is"<<" "<<c;
    }
    return 0;
}