#include<iostream>
using namespace std;
int g=5;
void fun()
{
    {
    int g=0;
    g++;
    cout<<endl<<g<<endl;
    }
    cout<<endl<<g<<endl;
}
Demo-Scoping Rule
#include<iostream>
using namespace std;
int main()
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl; 
}
{
    int x=20;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
}