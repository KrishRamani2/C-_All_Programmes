call by reference
#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    a = b;
    b=temp;
}
int main()
{
    int x =10,y=12;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}

Call by Address
#include<iostream>
using namespace std;
void swap(int * a, int *b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
  
}
int main()
{
    int x =10,y=20;
    swap(&x,&y);
    cout<<x<<" "<<y;
}

Call by __value
#include<iostream>
using namespace std;
void swap(int a, int b)
{
    cout<<a<<" "<<b<<endl;
    int temp;
    a = b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int x =10,y=12;
    swap(x,y);
    cout<<x<<" "<<y;
}
