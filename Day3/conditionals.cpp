#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Enter two numbers:";
	
	cin>>a>>b;
	float res=a-b;
	if(res>0) cout<<res*100<<" ";
	else if(res<0 and res<-100) cout<<res+600<<" ";
	else cout<<res*2<<" ";
	return 0;
}
