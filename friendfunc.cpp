#include<iostream>
using namespace std;
class MyClass
{
private:
int a = 10;
int b = 20;

friend void Print(MyClass); // friend function of class MyClass
friend int main();

void ReadData()
{
cout << "Input values of a and b " << endl;
cin >> a >> b;
}
};

void Print(MyClass param) // normal function
{
cout << param.a << endl << param.b << endl;
}

int main()
{
MyClass inst;

inst.ReadData();

cout << inst.a << endl << inst.b << endl;

Print(inst);

return 0;
}