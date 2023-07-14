#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str= "Welcome";
    cout<<str.capacity()<<endl;
    str.append("All of you how are you all");
     cout<<str.capacity()<<endl<<str.length()<<endl;
    cout<<str<<endl;
    cout<<str.insert(4,"oo")<<endl;
    cout<<str.insert(3,"Apple",2)<<endl;
    string s = "Programming";
    cout<<s.replace(3,5,"kk")<<endl;
    cout<<s.erase(3)<<endl;
    s.push_back('s');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    str.swap(s);
    cout<<s;
    return 0;
}