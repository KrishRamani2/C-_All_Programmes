#include<iostream>
using namespace std;
class Demo
{
    public:
    int g;
    int h;
    void Display()const
    {
        cout<<g<<" "<<h<<endl;
    }
};
void fun(const int&a, const int &b)
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int const y=10;
    cout<<y<<endl;
     const int  x=10;
     const int *ptr=&x;
     cout<<*ptr<<endl;
     cout<<x<<endl;
     int z=10;
     ptr=&z;
     cout<<*ptr<<endl;
     int e=19,d=10;
     fun(e,d);

}