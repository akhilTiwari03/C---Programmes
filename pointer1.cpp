#include <iostream>
using namespace std;

class test
{
public:
int a = 10;
int b = 20;

void Disp()
{
cout << "Disp function of Test class " << endl;
cout << "Values of data members are: " << a << " " << b << endl;
}
};

int main()
{
test obj; // int a;
test *ptr = &obj;
test &ref = obj; // ref = obj int &r = a;

ptr->Disp();
ptr->a = 50;
ptr->b = 100;
ptr->Disp();

ref.a = 100; // obj.a
ref.b = 200;
ref.Disp();

return 0;
}