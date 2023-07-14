#include <iostream>
using namespace std;
int main()
{
    float volume, radius, height;
    cout<<"Enter radius and height of cylinder ";
    cin>>radius>>height;
    volume = 3.1425f*radius*radius*height;
    cout<<"Volume of cylinder"<<volume;
    return 0;
}
