#include<iostream>
using namespace std;
void Merge(int a[] , int si , int end)
{
    int temp[end+1];
    int mid = (si+ end)/2;
    int j = mid+1;
    int i = si ; 
    int k = 0 ;
    while(i <=  mid || j <= end)
    {
        if(i <=  mid && j <= end && a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
            k++;
        }
        else if(i <=  mid && j <= end && a[i] >= a[j])
        {
            temp[k] = a[j];
            j++;
            k++;
        }
        else if(i <= mid)
        {
            temp[k] = a[i];
            k++; 
            i++;
        }
        else if(j <= end)
        {
            temp[k] = a[j];
            k++; 
            j++;
        }
    }
    k = 0;
    for(int i = si ; i <= end ; i++)
    {
        a[i] = temp[k++];
    }

}
void MergeSort(int a[] , int si , int end)
{
    if(si >= end)
    {
        return;
    }
    int  mid = (si + end)/2;
    MergeSort(a , si , mid);
    MergeSort(a , mid+1 , end);
    Merge(a , si ,  end);
    return;
}
int main()
{
    int n  ;
    cin >>  n;
    int *a = new int [n];
    for(int i = 0 ;   i < n ; i++)
    {
        cin >> a[i];
    }
    MergeSort(a , 0 , n-1);
    cout << endl;
    for(int i = 0 ;  i < n ; i++)
    {
        cout << a[i] <<  " ";
    }
    delete []a;
    return 0;
}