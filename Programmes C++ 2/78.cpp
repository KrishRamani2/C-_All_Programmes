#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20]="235";
    char s2[10]="54.78";
    long int x = strtol(s1,NULL,10 );
    float y=strtof(s2,NULL);
    cout<<x+100<<endl<<y-10.998<<endl;
    return 0;
}