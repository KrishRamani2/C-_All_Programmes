#include <iostream>
using namespace std;
int main()
{
    int A[]={2,3,4,5,6,7,8};
    int i,sum =0;
    for(i=0;i<7;i++)
    {
        sum+=A[i];
    }
    cout<<sum;
    return 0;
}

