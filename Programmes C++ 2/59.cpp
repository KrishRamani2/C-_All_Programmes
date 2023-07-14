#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    cout<<"Enter 5 numbers";
    for(int i=0;i<5;++i)
    {
        cin>>numbers[i];
    }
    int c=0,b=0;
    for(int i=0;i<5;++i)
    {
        if(numbers[i]>0)
        {
           c++;
        }
        else
        {
           b++;
        }
    }
    cout<<"Number of Positive Numbers is "<<c<<endl;
    cout<<"Number of Negative Numbers is "<<b<<endl;
    return 0;
}