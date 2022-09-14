#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[], int n)
{
int temp = arr[0];

for(int i = 1; i < n ; i++)
{
arr[i-1] = arr[i];
}
arr[n-1] = temp;
}

int main()
{
int arr[] = {1, 2, 3, 4, 5}; // 5 * 4 = 20 bytes

int size = sizeof(arr) / sizeof(int);
int count;

cout << "Input the number of times the array needs to be left rotated" << endl;
cin >> count;

for(int ct = 1; ct <= count; ct++)
{
leftRotate(arr, size);
}

for(int i=0; i<size; i++)
{
cout << arr[i] << " " ;
}
cout << endl;

return 0;
}