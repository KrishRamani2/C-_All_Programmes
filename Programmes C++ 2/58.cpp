#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    cout<<"Enter 5 numbers";
    for(int i=0;i<5;i++)
    {
        cin>>numbers[i];
    }
    int min =numbers[0];
    for(int i=0;i<6;i++)
    {
        if(min>numbers[i])
        {
            min = numbers[i];
        }
    }
    cout<<"Minimum Number is "<<min<<endl;
    return 0;
}