#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20]="Programming";
    char s2[10]="o";
    if(strstr(s1,s2)!=NULL)
    {
        cout<<strstr(s1,s2)<<endl;
    }
    else
    {
        cout<<"Not Found";
    }
    return 0;
}
