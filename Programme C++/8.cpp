#include <iostream>
using namespace std;
int main()
{
    float distance,v,u,acceleration;
    cout<<"Enter Final speed , Intial speed and acceleration of object";
    cin>>v>>u>>acceleration;
    distance = (v*v-u*u)/(2*acceleration);
    cout<<"Distance covered by the object is"<<distance;
    return 0;
}