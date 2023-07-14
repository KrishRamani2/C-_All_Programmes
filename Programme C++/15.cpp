#include <iostream>
using namespace std;
int main()
{
    float basic;
    float percentAllowance;
    float percentDeduction ;
    float netsalary;
    cout<<"Enter basic salary";
    cin>> basic;
    cout<<"Enter percentage of allowance";
    cin>> percentAllowance;
    cout<<"Enter percentage of deduction ";
    cin>>percentDeduction;
    netsalary = (basic*percentAllowance)/100.0-(basic*percentDeduction)/100.0;
    cout<<"Net salary is"<<" "<< netsalary;
    return 0;
}
    