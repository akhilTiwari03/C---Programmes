#include<iostream>
using namespace std;
class swapp
{
int a,b;
public:
void setdata()
{
cout<<"enter value of a and b \n";
cin>>a>>b;
}

void cal()
{
a=a+b;
b=a-b;
a=a-b;
cout<<"a="<<a<<endl<<"b="<<b;
}
};

int main()
{
swapp obj1;
obj1.setdata();
obj1.cal();
}