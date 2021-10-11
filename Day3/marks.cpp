#include<iostream>
using namespace std;
int main()
{
	float marks;
	cout<<"Enter the marks of the student:";
	cin>>marks;
	if(marks>100 or marks<0) cout<<"Enter a valid mark for the student";
	if(marks>=90 and marks<=100) cout<<"A+ ";
	else if(marks>=80 and marks<=89) cout<<"A ";
	else if(marks>=70 and marks<=79) cout<<"B+ ";
	else if(marks>=60 and marks<=69) cout<<"B ";
	else if(marks>=50 and marks<=59) cout<<"C+ ";
	else if(marks>=40 and marks<=49) cout<<"C ";
	else if(marks>=0 and marks<=39)cout<<"F ";
	return 0;
}
