#include<iostream>
using namespace std;
class Base
{
    public:
    void fun1()
    {
        cout<<"Fun 1 of base"<<endl;
    }
    void fun2()
    {
        cout<<"Fun 2 of Base"<<endl;
    }
    void fun3()
    {
        cout<<"Fun 3 of base"<<endl;
    }
};
class Derived : public Base
{
    public:
    void fun4()
    {
        cout<<"Fun 4 of Derived class"<<endl;
    }
};
int main()
{
    Derived d;
    Derived *ptr=&d;
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();
    ptr->fun4();
}