#include<iostream>
using namespace std;
class Func_call
{
    int a,b,c;
    public:
    void valuecal(int a)
    {
       ++a;
       cout<<"A :"<<a<<endl;
    }
    void refcall(int &b)
    {
        b+=2;
        cout<<" B :"<<b<<endl;
    }
    void pointcall(int *c)
    {
       *c+=3;
        cout<<" C :"<<*c<<endl;
    }
};
int main()
{
    int x=2,y=5,z=9;
    cout<<" X,Y,Z :"<<x  <<  y  <<z<<endl;
    Func_call s;
    s.valuecal(x);
    s.refcall(y);
    s.pointcall(&z);
    

}