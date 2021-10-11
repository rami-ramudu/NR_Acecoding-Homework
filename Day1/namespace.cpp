#include<iostream>
using namespace std;
namespace n1
{
    int val=100;
    int ret1()
    {
        return 100;
    }
}
namespace n2
{
    double val=10.2;
    int ret1(int b)
    {
        return b;
    }
}
int main()
{
    cout<<n1::val<<"\n";
    cout<<n2::val;
    cout<<n1::ret1();
    cout<<"\n"<<n2::ret1(1222);
    return 0;
}
