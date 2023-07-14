#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    int x=5;
    fun(x);
    
}
or
#include<iostream>
using namespace std;
void fun()
{
    static int v=0;
    int a=5;
    v++;
    cout<<a<<" "<<v<<endl;
}
int main()
{
    fun();
    fun();
    fun();
}

#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    int x=5;
    fun(x);   
}
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    int x=5;
    fun(x);
    
}

