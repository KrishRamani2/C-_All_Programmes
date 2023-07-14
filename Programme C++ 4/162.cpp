#include<iostream>
using namespace std;

class Parent
{
	virtual void show() final
	{
	        
	}
	
};
    
class Child:Parent \\Cannot inherit due to "final" keyword
{
	void show()
	{
	        
	}
	
};
    
    
