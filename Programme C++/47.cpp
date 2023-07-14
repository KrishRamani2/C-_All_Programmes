#include <iostream>
using namespace std;
int main()
{
    int n,i,counter=0;
    cout<<"Enter number to check if it is a prime number or not";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            counter++;
        }
    }
    if(counter<=2)
    {
        cout<<n<<" Is Prime Number";
    }
    else
    {
        cout<<n<<" Is Not a Prime Number";
    }
    return 0;
}
