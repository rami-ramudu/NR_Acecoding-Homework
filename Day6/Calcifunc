#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float divi(int a,int b=1)
{
    return a/b;
}
int main()
{
    while(1)
    {

        int num1,num2;
        cout<<"Enter Number 1:";
        cin>>num1;
        cout<<"Enter Number 2:";
        cin>>num2;
        cout<<"Enter the operation-->+,-,*,/";
        char op;
        cin>>op;
        if(op=='+') cout<<"The answer is "<<add(num1,num2);
        else if(op=='-') cout<<"The answer is "<<sub(num1,num2);
        else if(op=='*') cout<<"The answer is "<<mul(num1,num2);
        else if(op=='/') cout<<"The answer is "<< divi(num1,num2);
        else cout<<"Wrong operation\n";
        int ch;
        cout<<"Do you want to continue?(1-Yes,0-No)";
        cin>>ch;
        if(ch==0) break;
    }
    
    return 0;
}
