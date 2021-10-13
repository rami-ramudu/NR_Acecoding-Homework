// 4
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int count=i-1;
        for(int j=1;j<=i;j++)
        {
            cout<<i;
            if(count>0)
            {
                cout<<"*";
                count--;
            }
        }
        
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
    {
        int count=i-1;
        for(int j=1;j<=i;j++)
        {
           cout<<i;
           if(count>0)
            {
                cout<<"*";
                count--;
            }
        }
        
        cout<<"\n";
    }

  
    return 0;
}
