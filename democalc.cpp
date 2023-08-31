#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int operand1, operand2;
    string op;
    cout<<"Welcome to Calculator app :"<<endl;
    cout<<"Enter operand 1 : ";
    cin>>operand1;
    cout<<"Enter operand 2 : ";
    cin>>operand2;
    cout<<"Enter operator : ";
    cin>>op;
    if (op == "+")
    {
        cout<<"The output is : "<<operand1+operand2<<endl;
    }
    else if (op == "-")
    {
        cout<<"The output is : "<<operand1-operand2<<endl;
    }
    else
    {
        cout<<"Invalid Operator!"<<endl;
    }
        
}