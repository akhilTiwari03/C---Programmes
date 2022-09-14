#include<iostream>
using namespace std;
class MyClass
{
public:
int a;
int b;
float c;
float d;

MyClass(int x, int y)
{
a = x;
b = y;
}
MyClass()
{
a = 10;
b = 20;
}
MyClass(int x)
{
a = x;
b = 50;
}
MyClass(double x, double y)
{
c = x;
d = y;
}
};

int main()
{
MyClass obj(100,200);
cout << obj.a << "\t" << obj.b << endl;

MyClass inst;
cout << inst.a << "\t" << inst.b << endl;

MyClass objf(30);
cout << objf.a << "\t" << objf.b << endl;

MyClass object(5.5, 10.5); // double to float conversion
cout << object.c << "\t" << object.d << endl;

return 0;
}