#include<iostream>
#include<cstring>
using namespace std;
void RemoveDuplicates(char a[] , int newindex , int index)
{
    if(a[index] == '\0')
    {
        a[newindex] = a[index - 1];
        a[newindex + 1] = '\0';
        return;
    }
    if(a[index] ==  a[index -1] )
    {
        RemoveDuplicates(a , newindex , index +1);
        return;
    }
    else
    {
        a[newindex] = a[index -1] ;
        RemoveDuplicates(a , newindex + 1 ,index + 1);
        return;
    }
}
int main()
{
    char a[1000];
    cin.getline(a , 100);
    RemoveDuplicates(a , 0 , 1);
    cout<< a << "  " << strlen(a);
    return 0;
}
