#include<bits/stdc++.h>
using namespace std ;
void BubbleSort(int arr[] , int n)
{
    for(int i = 0 ; i<n -1 ; i++)
    {
        for(int j = i + 1 ; j<n ; j++)
        {
            if(arr[i] >= arr[j] )
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<" The array After Bubble Sort is : "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<< arr[i]<<endl;
    }

}
int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>> a[i];
    }
    cout<<" The array Before Bubble Sort is :"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<< a[i] << endl;
    } 
    BubbleSort(a , n);  
    return 0; 
    
}