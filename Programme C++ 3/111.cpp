#include <iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int img;
    public:
    complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }
    friend ostream & operator <<(ostream &o,complex &c);
};

ostream & operator <<(ostream &o,complex &c)
{
     o<<c.real<<"+i"<<c.img<<endl;
    return o;
}
int main()
{
    complex c(10,5);
    cout<<c<<endl;
    operator<<(cout,c);
}
