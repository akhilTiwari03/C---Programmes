#include<iostream>
using namespace std;
void Sorting(int *a , int n)
{
    int i = 0 , j = 0;
    while(i < n)
    {
        if(a[i] == 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    for(int i = 0 ;i < n ; i++)
    {
        cin >> a[i];
    }
    Sorting(a , n);
    for(int i = 0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
}