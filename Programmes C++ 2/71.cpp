#include <iostream>
using namespace std;
int main()
{
    char s[100];
    char a[100];
    cout<<"Enter your Name";
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    cin.ignore();
    cout<<"Enter your name again";
    cin.get(a,100);
    cout<<"Welcome "<<a<<endl;
    return 0;

}
or
#include <iostream>
using namespace std;
int main()
{
    char s[50];
    char a[100];
    cout<<"Enter your name";
    cin.getline(s,50);
    cout<<"Enter your  name again";
    cin.getline(a,100);
    cout<<"Welcome "<<s<<endl;
    cout<<"Welcome "<<a<<endl;
    return 0;
} 