#include<iostream>
using namespace std;
void BubbleSort(int *a ,  int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0;  j < n- i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n ;
    cin >> n;
    int a[110];
    for(int i =0 ; i < n; i++)
    {
        cin >> a[i];
    }
    BubbleSort(a , n);
    cout << "After Sorting The Array is : ";
    for(int i = 0; i < n ; i++)
    {
        cout << a[i] << " ";
    }
}