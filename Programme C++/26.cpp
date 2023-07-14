#include <iostream>
using namespace std;
typedef int marks;
int main()
{
    marks m1,m2,m3,m4,m5,m6;
    int total;
    float avg;
    cout<<"\n\t1 Enter marks of English"<<endl;
    cin>>m1;
    cout<<"\n\t2 Enter marks of Social Science"<<endl;
    cin>>m2;
    cout<<"\n\t3 Enter marks of Hindi "<<endl;
    cin>>m3;
    cout<<"\n\t4 Enter marks of Science"<<endl;
    cin>>m4;
    cout<<"\n\t5 Enter marks of Mathematics"<<endl;
    cin>>m5;
    cout<<"\n\t6 Enter marks of Computer Science"<<endl;
    cin>>m6;
    total = m1+m2+m3+m4+m5+m6;
    avg = total/6.0;
    if(avg>=60)
    {
        cout<<"Grade is A";
    }
    else if(avg>=35 && avg<60)
    {
        cout<<"Grade is B";
    }
    else 
    {
        cout<<"Grade is C";
    }
    return 0;
}