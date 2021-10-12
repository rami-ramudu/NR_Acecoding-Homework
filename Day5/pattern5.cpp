#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        for(int k=1;k<=i-1;k++) cout<<" ";

        cout<<"*";

        for(int k=1;k<=n-2*i;k++) cout<<" ";

        cout<<"*";

        cout<<"\n";
    }
    if(n%2)
    {
        for(int i=1;i<=n/2;i++) cout<<" ";
        cout<<"*";
        cout<<"\n";
    }
    for(int i=n/2;i>=1;i--)
    {
        for(int k=1;k<=i-1;k++) cout<<" ";

        cout<<"*";

        for(int k=1;k<=n-2*i;k++) cout<<" ";

        cout<<"*";

        cout<<"\n";
    }
    
    return 0;
}

// 10
// *        *
//  *      *
//   *    *
//    *  *
//     **
//     **
//    *  *
//   *    *
//  *      *
// *        *
