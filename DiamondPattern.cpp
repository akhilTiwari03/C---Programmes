#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int i = 1;
    while(i <= n/2)
    {
        int j = 1;
        while(j <= n/2-i+1)
        {
            cout <<" ";
            j++;
        }
        j=1;
        while(j <= i)
        {
            cout << '*';
            j++;
        }
        j = 2;
        while(j <= i)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
    i = n/2 + 1;
    while(i >= 1)
    {
        int j = 1;
        while(j <= n/2-i+1)
        {
            cout <<" ";
            j++;
        }
        j=1;
        while(j <= i)
        {
            cout << '*';
            j++;
        }
        j = 2;
        while(j <= i)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i--;
    }
}
