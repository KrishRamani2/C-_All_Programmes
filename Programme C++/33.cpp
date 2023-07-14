#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter Day number";
    cin>>day;
    switch(day)
    {
        case 1: cout<<"Day Is Sunday";
        break;
        case 2: cout<<"Day Is Monday";
        break;
        case 3: cout<<"Day Is Tuesday";
        break;        
        case 4: cout<<"Day Is Wedsnesday";
        break;        
        case 5: cout<<"Day Is Thursday";
        break;        
        case 6: cout<<"Day Is Friday";
        break;        
        case 7: cout<<"Day Is Saturday";
        break;
        default:cout<<"Invalid day number";
    }
    return 0;
}