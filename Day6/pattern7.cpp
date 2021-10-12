#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        
        for(int j=1;j<=i;j++) cout<<(char)(j-1+'A')<<" ";
        for(int j=i-1;j>=1;j--) cout<<(char)(j-1+'A')<<" ";
        cout<<"\n";
    }
    return 0;
}

// 5
// A 
// A B A 
// A B C B A 
// A B C D C B A 
// A B C D E D C B A 
