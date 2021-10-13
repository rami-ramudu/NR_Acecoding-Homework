#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int fact=1;
    int sums=0;
    for(int i=1;i<=n;i++) sums+=pow(i,4);
    cout<<"The sum of the series till"<<n<<" terms is "<<sums;
    return 0;
}
