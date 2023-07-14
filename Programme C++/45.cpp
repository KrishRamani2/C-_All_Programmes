#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter number whose factor is needed";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           sum+=i;
        }
    }
     cout<<"Sum of Factors of "<<n<<" is = "<<i<<endl;
    return 0;
}