#include <iostream>
using namespace std;
int main()
{
    float amount, totalbill;
    cout<<"Enter Amount of bill";
    cin>>amount;
    if(amount>=5000)
    {
        totalbill = amount-(amount*(20/100.0));
    }
    else if(amount>=2000 && amount<5000)
    {
        totalbill = amount-(amount*(10/100.0));
    }
    else
    {
        totalbill = amount-(amount*(5/100.0));
    }
    cout<<"Total bill is"<<" "<<totalbill;
    return 0;
}