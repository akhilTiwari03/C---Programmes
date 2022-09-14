#include<iostream>
using namespace std;
class Test
{
    public:
    void Disp(int a)
    {
        cout<<" Value of a is:"<<a <<endl;
    }
};
int main()
{
    Test obj;
    Test *ptr = &obj;
    void (Test :: *fp)(int ) = &Test::Disp;
    obj.Disp(10);
    (obj.*fp)(20);

    ptr->Disp(50);
    (ptr->*fp)(100);

}