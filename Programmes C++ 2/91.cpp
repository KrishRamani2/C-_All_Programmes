#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your email id to check username is valid or not";
    getline(cin,str);
    int i = (int)str.find('@');
    string b = str.substr(0,i);
    int c=0;
    int d=0;
    for(int i=0;b[i]!='\0';i++)
    {
        if(b[i]=='a'||b[i]=='b'||b[i]=='c'||b[i]=='d'||b[i]=='e'||b[i]=='f'||b[i]=='g'||b[i]=='h'||b[i]=='i'||b[i]=='j'||b[i]=='k'||b[i]=='l'||b[i]=='m'||b[i]=='n'||b[i]=='o'||b[i]=='p'||b[i]=='q'||b[i]=='r'||b[i]=='s'||b[i]=='t'||b[i]=='u'||b[i]=='v'||b[i]=='w'||b[i]=='x'||b[i]=='y'||b[i]=='z'||b[i]=='Q'||b[i]=='W'||b[i]=='E'||b[i]=='R'||b[i]=='T'||b[i]=='Y'||b[i]=='U'||b[i]=='I'||b[i]=='O'||b[i]=='P'||b[i]=='A'||b[i]=='S'||b[i]=='D'||b[i]=='F'||b[i]=='G'||b[i]=='H'||b[i]=='J'||b[i]=='K'||b[i]=='L'||b[i]=='Z'||b[i]=='X'||b[i]=='C'||b[i]=='V'||b[i]=='B'||b[i]=='N'||b[i]=='M'||b[i]==1||b[i]==2||b[i]==3||b[i]==4||b[i]==5||b[i]==6||b[i]==7||b[i]==8||b[i]==9||b[i]==0||b[i]=='_'||b[i]=='.')
        {
            cout<<"Valid Username"<<endl;
        }
        else
        {
            cout<<"Not Valid Username"<<endl;
        }
    }
    return 0;
}
    