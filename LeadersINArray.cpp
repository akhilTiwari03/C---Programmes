// Leaders are Those whose values preceeding all values is largest . eg :- In 3 42 8 7 2 6 1 ; here Leaders are 42 8 7 6 1
#include<iostream>
#include<climits>
using namespace std;
void Leaders(int *a , int n )
{
    int j = 0;
    int* temp = new int[n];
    int largest = INT_MIN;
    for(int i = n-1 ; i >= 0 ;  i--)
    {
        if(largest < a[i])
        {
            largest = a[i];
            temp[j] = a[i]; 
            j++;
        }
    }
    for(int i = j-1 ; i >= 0 ; i--)
    {
        cout <<  temp[i]  <<  " ";
    }
    delete []temp;
}
int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0 ; i< n ; i++)
    {
        cin >> a[i];
    }
    Leaders(a , n);
    delete []a;
    return 0;
}