#include <iostream>

using namespace std;

class Test
{
private:
static int a;
int b = 30;

public:
static void Disp()
{
cout << a << endl;
}
void TestFunc() // obj.Test(); obj2.Test()
{
cout << "normal func" << endl;
cout << b << endl; // obj.b; obj2.b;
cout << a << endl;
}
};

int Test::a = 20;

int main()
{
Test :: Disp();

Test obj;

obj.TestFunc();

return 0;
}