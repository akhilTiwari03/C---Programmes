#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void Substrings(char a[])
{
    int n = strlen(a);
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 0 ; j <= n -i ; j++)
        {
            int len = i + j -1 ;
            for(int k = j ; k <= len ; k++)
            {
                cout << a[k] ;
            } 
            cout<< endl;
        }
    }
}
int main()
{
    char a[1000];
    cin.getline(a, 10000);
    Substrings(a);
    return 0 ;
}