#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
void setLength(int l)
{
    if(l>0)
    {
        length=l;
    }
    else {length=0;cout<<"Length cannot be negative";}
}
void setBreadth(int b)
{
    if(b>0)
    {breadth=b;}
    else {breadth=0;cout<<"Breadth cannot be negative";}
}
int getLength(){return length;}
int getBreadth(){return breadth;}    
int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(9);
    cout<<r1.area()<<endl;
    cout<<"Length is "<<r1.getLength()<<endl;
    cout<<"Breadth is "<<r1.getBreadth()<<endl;

}
