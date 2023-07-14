#include <iostream>
using namespace std;
int main()
{
   int n,i,sum=0;
   cout<<"Enter value of n for sum of n natural number ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
    sum+=i;
   }
   cout<<"Sum of "<<n<<" natural numbers is "<<" "<<sum;
   return 0;
}
