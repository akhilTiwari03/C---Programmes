#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n ;i++)
    {
        cin>> a[i];
    }
    int sum , count =1;
    for(int i = 0 ; i<n ; i++) // Subarray is a selection of continuous number of elements in an given array 
    {
    sum = 0;
    for(int j = i ; j<n ; j++)
    {
        sum += a[j];
        cout<<"The Sum of "<<count<<" Subarray : "<<sum<<endl; //formula for finding no of subarray in an array is n*(n+1)/2
        count++;
    }
    }
    return 0;
}