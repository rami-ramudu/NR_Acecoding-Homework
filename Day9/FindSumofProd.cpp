#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter the no of elements of an array:";
    cin>>n;
    int arr[n];
    int TotalSum=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        int sums=0;
        int curr=arr[i];
        for(int j=0;j<n;j++)
        {
            if(i!=j) sums+=arr[j];
        }
        TotalSum+=curr*sums;
    }
     cout<<"The TotalSum is: "<<TotalSum;
    return 0;
}
