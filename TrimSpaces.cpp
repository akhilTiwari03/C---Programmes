#include<iostream>
#include<cstdio>
using namespace std;
void trimSpaces(char a[])
{
    int i = 0;
    int j = 0;
    while(a[i] != '\0')
    {
        if(a[i] != ' ')
        {
            a[j] = a[i];
            j++;
        }
        i++;
    }
    a[j] = '\0';
}
int main()
{
    char a[1000] ; 
    cin.getline(a , 1000);
    trimSpaces(a);
    cout << a;

}