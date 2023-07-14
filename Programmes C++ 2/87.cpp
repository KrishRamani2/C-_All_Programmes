#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your string";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout<<str;

   return 0;
}