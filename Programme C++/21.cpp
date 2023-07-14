#include <iostream>
using namespace std;
int main()
{
    float time;
    cout<<"Enter time in 24 hour format";
    cin>>time;
    if(time>=9.0 && time<=18.0)
    {
        cout<<"Working Hour";
    }
    else
    {
        cout<<"Leisure Hour";
    }
    return 0;
}