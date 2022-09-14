#include<iostream>
using namespace std;
int  QuickSortPartition(int *a , int si , int end)
{
    int ct = si ;
    int i = si+1;
    while(i <= end)
    {
        if(a[si] >= a[i++])
        {
            ct++;
        }
    }
    int temp = a[si];
    a[si] = a[ct];
    a[ct] = temp;
    i = si ; 
    int j = end;
    while(i < ct && j > ct)
    {
        if(a[i] > a[ct] && a[j] <= a[ct])
        {
            int temp = a[i];
            a[i++] = a[j];
            a[j--] = temp;
        }
        else  if(a[i] > a[ct] )
        {
            j--;
        }
        else
            i++;
    }
    return ct ;
}
void QuickSort(int *a ,int si , int end)
{
    if(si >= end)
    {
        return;
    }
    int c = QuickSortPartition(a , si , end);
    QuickSort(a  , si , c-1);
    QuickSort(a , c+1 , end);
    return;
}
int main()
{
    int n ;
    cin >> n;
    int *a = new int [n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >>  a[i];
    }
    QuickSort(a , 0 , n-1);
    cout << endl;
    for(int i = 0 ; i < n ;  i++)
    {
        cout << a[i] <<"  ";
    }
    delete []a;
    return 0;
}