#include<iostream>
using namespace std;
void Sort012(int *a , int n)
{
    int i = 0  , nZ = 0; 
    int nT = n - 1 ;
    while(i <= nT)
    {
        if(a[i] == 0)
        {
            int temp = a[i];
            a[i] = a[nZ];
            a[nZ] = temp;
            nZ++;
            i++;
        }
        else if(a[i] == 2)
        {
            int temp = a[i];
            a[i] = a[nT];
            a[nT] = temp;
            nT--;
        }
        else
        i++;
    }
}
int main()
{
    int  n;
    cin >> n;
    int a[100];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    Sort012(a , n);
    cout << "After Sorting array is : ";
    for(int i = 0 ; i < n ;  i++)
    {
        cout << a[i] << " ";
    }
}