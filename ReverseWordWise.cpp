#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void Reverse(char a[])
{
    int n = strlen(a);
    int  i =0 , j = n-1;
    while(i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    i = 0;
    int st , end ;
    while(a[i] != '\0')
    {
        int st = i ;
        while(a[i] != ' ' && a[i] != '\0')
        {
            i++;
        }
        end = i - 1 ;
        while(st <=  end)
        {
            int temp = a[st];
            a[st++] = a[end];
            a[end--] = temp;
        }
        i++;
    }
}
int main()
{
    char a[10000];
    cin.getline(a , 10000);
    Reverse(a);
    cout<<"\nAfter the Reverse :  ";
    cout << a;
    return 0;
}