#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Today";
    string::iterator it;
    int count =0 ;
    for(it=s.begin();it!=s.end();it++)
    {
        count++;
    }
    cout<<"Length is "<<count<<endl;
    return 0;
}
or
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count=0;
    for(int i =0;s[i]!='\0';i++)
    {
        count++;
    }
    cout<<count;
    return 0;
}