#include <iostream>
using namespace std;
int main()
{
    int A[]={4,5,6,66,77,89,123,222,282};
    int max =A[0];
    for(int i=0;i<10;i++)
    {
        if(max<A[i])
        {
            max = A[i];
        }
    }
    cout<<"Maximum Number is "<<max<<endl;
    return 0;
}
