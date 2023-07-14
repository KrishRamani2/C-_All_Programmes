#include <iostream>
using namespace std;
int main()
{
    int n,i,m;
    cout<<"Enter number of which multiplication table you need";
    cin>>n;
    cout<<"Enter number till which number table you want";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cout<<n<<" "<<"X"<<" "<<i<<" "<<"="<<" "<<i*n<<endl; 

    }
    return 0;
}