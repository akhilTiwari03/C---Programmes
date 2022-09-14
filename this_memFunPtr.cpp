#include<iostream>
using namespace std;
class test
{
public:
int a = 10; // + 4 bytes
int b = 20; // this pointer - start add of obj this - keyword

void Disp(int a, int b) // Accessible only inside member functions class provides this pointer by default
{
cout << "Member function of " << this << " object " << endl;
this->a = a;
this->b = b;
}
};

int main()
{
test obj;

obj.Disp(100, 200);

cout << "Values modified are : " << endl << obj.a << endl << obj.b << endl;

return 0;
}