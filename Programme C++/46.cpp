#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter number to check  if it is a perfect number or not";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           sum+=i;
        }
    }
    if(sum==2*n)
    {
        cout<<n<<" Is Perfect Number "<<endl;
    }
    else
    {
        cout<<n<<" Is Not A  Perfect Number "<<endl;
    }
    return 0;
}