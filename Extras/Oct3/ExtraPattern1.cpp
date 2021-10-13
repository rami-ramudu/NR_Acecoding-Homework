// 2
// 2
// 33
// 444
// 33
// 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int k=n;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<k;
        }
        k++;
        cout<<"\n";
    }
    int temp=k;
    for(int i=1;i<=n+1;i++)
    {
        cout<<k;
    }
    cout<<"\n";
     k=temp-1;
    for(int i=n;i>=1;i--)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<k;
        }
        k--;
        cout<<"\n";
    }

    return 0;
}
