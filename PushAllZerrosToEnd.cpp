#include<iostream>
using namespace std;
void PushZerosToEnd(int *a , int n)
{
    for(int i = 0 , j = 0 ; i < n ; i++)
    {
        if(a[i] != 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[300];
    for(int i = 0;  i < n ; i++)
    {
        cin >> a[i];
    }
    PushZerosToEnd(a , n);
    cout<< "After Pushing The final Array is: \n";
    for(int i = 0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
}