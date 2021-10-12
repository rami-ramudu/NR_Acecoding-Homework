#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++) cout<<"  ";
        int temp=(2*i)-1;
        for(int j=i;j<=temp;j++) cout<<j<<" ";
        for(int j=temp-1;j>=i;j--) cout<<j<<" ";
        cout<<"\n";
    }
    return 0;
}
// 7
//             1 
//           2 3 2 
//         3 4 5 4 3 
//       4 5 6 7 6 5 4 
//     5 6 7 8 9 8 7 6 5 
//   6 7 8 9 10 11 10 9 8 7 6 
// 7 8 9 10 11 12 13 12 11 10 9 8 7 
