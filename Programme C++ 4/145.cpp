#include<iostream>
using namespace std;
class Demo
{
    public:
    int g=10;
    int h=19;
    void Display()const
    {
        cout<<g<<" "<<h<<endl;
    }
};
int main()
{
    Demo d;
    d.Display();
}