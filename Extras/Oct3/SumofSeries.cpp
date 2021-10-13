//  1/2+2/3+....n/n+1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
   
    double sums=0;
    for(double i=1;i<=n;i++) sums+=(i/(i+1));
    cout<< "The sum of the series till"<<n<<" terms is "<<sums;
    return 0;
}
