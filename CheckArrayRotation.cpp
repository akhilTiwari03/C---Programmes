#include<iostream>
using namespace std;
int CheckRotation(int *a , int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(a[i] > a[i+1])
        {
            if(i == 0)
            {
                return n;
            }
            return i+1;
        }    
    }
    return 0;
}
int main()
{
    int n ;
    cin >> n;
    int a[100];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int r = CheckRotation(a , n);
    cout << r;
    return 0;
}