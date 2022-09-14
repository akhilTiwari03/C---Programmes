#include <iostream>
using namespace std;

class test
{
public:
int a = 10;
int b = 20;
int c = 30;
};

int main()
{
// int a;
// int *ptr = &a; a = 10; *ptr = 10;
// ptr = &c;

int test::*ptr; // declaration
test obj;

ptr = &test::b; // defining the pointer
test *p = &obj; // pointer to the object

//obj.b
(obj.*ptr) = 50;
cout << "Value of ptr modified for b : " << (obj.b) << endl;

//p->b obj.b
(p->*ptr) = 100;
cout << "Value of ptr modified for b : " << (obj.b) << endl;

p->a = 500;
p->c = 1000;

return 0;
}