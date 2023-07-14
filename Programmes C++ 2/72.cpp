#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *s;
    cout<<"Enter String";
    cin.getline(s,100);
    
    cout<<"Length of string hello"<<endl;
    cout<<strlen(s)<<endl;
    return 0;
}