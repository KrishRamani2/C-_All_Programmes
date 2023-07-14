#include <iostream>
using namespace std;
int main()
{
    float SI,p,r,t;
    cout<<"Enter Principal amount , rate of interest , time in years";
    cin>>p>>r>>t;
    SI = (p*r*t)/100.0;
    cout<<"Simple Interset is "<<SI;
    return 0;
} 
