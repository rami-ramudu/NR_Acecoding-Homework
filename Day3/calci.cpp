#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Number 1:";
    cin>>num1;
    cout<<"Enter Number 2:";
    cin>>num2;
    cout<<"Enter the operation-->+,-,*,/";
    char op;
    cin>>op;
    if(op=='+') cout<<"The answer is "<<num1+num2;
    else if(op=='-') cout<<"The answer is "<<num1-num2;
    else if(op=='*') cout<<"The answer is "<<num1*num2;
    else if(op=='/') cout<<"The answer is "<<num1/num2;
    else cout<<"Wrong operation\n";
    return 0;
}
