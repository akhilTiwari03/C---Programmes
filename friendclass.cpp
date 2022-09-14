#include<iostream>
using namespace std;
class MyClass
{
private:
int a = 10;
int b = 20;

public:
friend class Frnd; // friend class of MyClass
};

class Frnd
{
public:
void Print(MyClass param) // normal function
{
cout << param.a << endl << param.b << endl;
}
void sum(MyClass param)
{
cout << param.a + param.b << endl;
}
void mult(MyClass param)
{
cout << param.a * param.b << endl;
}
};

int main()
{
MyClass inst;
Frnd obj; // required to invoke functions of class Frnd

obj.Print(inst);
obj.sum(inst);
obj.mult(inst);

return 0;
}