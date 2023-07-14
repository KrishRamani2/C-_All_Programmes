Short circuit
#include <iostream>
using namespace std;
int main()
{
    int a,b,i=5;
    cout<<"Enter value of a and b";
    cin>>a>>b;
    if(a<b && ++i<b)
    {
    }
     cout<<i<<endl;
    return 0;
}