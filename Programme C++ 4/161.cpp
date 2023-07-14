#include<iostream>
using namespace std;   
float fun()
{
	return 2.34f;
}
    
int main()
{
	double d=12.3f;
	int i=9;
	auto x=2*d+i;
    auto y=fun(); 
    float e=90.5;
    decltype(e) w=12.3;
    cout<<w<<endl;
    cout<<y<<endl;  
	cout<<x<<endl;
	return 0;    
}