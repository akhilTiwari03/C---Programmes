#include<iostream>
using namespace std;
void RTL(int *a , int n , int d)
{
    int temp[50] ;
    int i = 0; 
    while(i < d)
    {
        temp[i] = a[i];
        i++;
    }
    for(int x = d ; x < n ; x++)
    {
        a[x-d] = a[x];
    }
    for(int i = 0  , j = n-d ; j < n ; j++)
    {
        a[j] = temp[i++];
    }
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int d;
    cout << "Enter the no. of Elements want to rotate : ";
    cin >> d;
    RTL(a , n , d);
    cout <<"After Rotation The array would Look like : \n";
    for(int i = 0; i < n ; i++)
    {
        cout << a[i] <<" ";
    }
}
