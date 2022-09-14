#include<iostream>
using namespace std;
void Print(int b)
{
cout << "Global function" << endl << b << endl;
}

int main()
{
Print(10);

void (*fp)(int) = &Print;
(*fp)(20); // return_type

return 0;
}