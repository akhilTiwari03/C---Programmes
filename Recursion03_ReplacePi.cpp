#include<iostream>
#include<cstring>
using namespace std;
void ReplacePi(char a[])
{
    if(strlen(a) <= 1)
    {
        return;
    }
    ReplacePi(a+1);
    if(a[0] == 'p' && a[1] == 'i')
    {
        int i = strlen(a) - 1;
        while(i >= 0)
        {
            a[i+2] = a[i];
            i--;
        }
        a[0] = '3';
        a[1] = '.';
        a[2] = '1';
        a[3] = '4';
    }
}
int main()
{
    char a[1000];
    cin.getline(a, 1000);
    ReplacePi(a);
    cout <<  a;
    return 0;
}