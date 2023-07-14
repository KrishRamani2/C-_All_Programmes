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
    int avg=0,sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=numbers[i]; 
    }
    avg = sum/(5.0);
    cout<<"Average of numbers is "<<avg<<endl;
    return 0;
}