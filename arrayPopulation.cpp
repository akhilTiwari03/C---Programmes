// populating the array in the order - 1 3 5 .......6 4 2
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int a[100];
    int count = 1;
    for(int i = 0 , j = n-1;  ;i++ ,j--)
    {
        if(i == j)
        {
            a[i] = count;
            break;
        }
        a[i] = count++;
        a[j] = count++;
    }
    cout <<" Array Population is as follows : " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << a[i] << endl;
    }
}