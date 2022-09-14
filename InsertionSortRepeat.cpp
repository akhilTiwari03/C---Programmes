#include<iostream>
using namespace std;
void InsertionSort(int *a , int n)
{
    int i =  1;
    while(i < n)
    {
        int temp = a[i];
        int j = i -1;
        while(j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
        i++;
    }
}
int main()
{
    int n ;
    cin >> n;
    int a[200];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    InsertionSort(a , n);
    cout <<"After Sorting The Array is : ";
    for(int i = 0; i < n ; i++)
    {
        cout << a[i] << " ";
    }
}