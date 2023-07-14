#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number whose factor is needed";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"Factors of "<<n<<" is = "<<i<<endl;
        }
    }
    return 0;
}