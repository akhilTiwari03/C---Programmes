#include<iostream>
using namespace std;
class Calc
{
    int a,b;
    public:
    void calc()
    {
        char ch;
        cout<<" Enter the numbers:\n";
        cin>>a>>b;
        cout<<"Enter the operator:";
        cin>>ch;
        switch(ch)
        {
            case '+':
            cout<<"Sum: "<<a+b; break;
            
            case '-':
            cout<<"Sub: "<<a-b; break;
            
            case '*':
            cout<<"Mul: "<<a*b;break;
            
            case '/':
            cout<<"Div: "<<a/b;break;
            
            default: cout<<"Wrong Input";
        }
    }
};
int main()
{
    Calc c;
    c.calc();
    return 0;
}