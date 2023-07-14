#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str= "Welcome";
    str.resize(50);
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;
    str.clear();
    cout<<str.length()<<endl;
    if(str.empty())
    {
        cout<<"String is empty"<<endl;
    }
    else
    {
        cout<<"String is "<<str<<endl;
    }

    return 0;


}