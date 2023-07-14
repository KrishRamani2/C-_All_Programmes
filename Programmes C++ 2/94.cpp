#include<iostream>
using namespace std;
int min(int x ,int y)
{
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int min(int x,int y, int z)
{
    if(x<y && x<z)
    {
        return x ;
    }
    else if(y<z)
    {
        return y;
    }
    else return z;
}
float min(float x , float y)
{
    if(x<y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}
int main()
{
    cout<<min(10,5)<<endl;
    cout<<min(12,7,9)<<endl;
    cout<<min(18.0f,9.0f)<<endl;
    return 0;
}