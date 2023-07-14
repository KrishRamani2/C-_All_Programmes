#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s ="Welcome";
    string s2 = "Home";
    char str[10];
    s.find("come");
    cout<<s.find("come")<<endl;
    s.copy(str,s.length());
    cout<<str<<endl;
    s.copy(str,3);
    str[3]='\0';
    cout<<str<<endl;
    s.rfind("come");
    cout<<s.rfind("come")<<endl;
    cout<<s.find("come")<<endl;
    s.find_first_of("o");
    cout<<s.find_first_of("o")<<endl;
    s.find_first_of("o",3);
    cout<<s.find_first_of("o",3)<<endl;
    s.find_last_of("o");
    cout<<s.find_last_of("o")<<endl;
    s.find_last_of("o",4);
    cout<<s.find_last_of("o",4)<<endl;
    s.substr(1,5);
    cout<<s.substr(1,5)<<endl;
    cout<<s.compare(s2)<<endl;
    return 0;
}