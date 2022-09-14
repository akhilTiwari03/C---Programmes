#include <iostream>
#include<climits>
using namespace std;
int SecondLargest(int *a , int n)
{
    int sLarge = INT_MIN;
    int large = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > large)
        {
            sLarge = large;
            large = a[i];
        }
        if(sLarge > a[i] && a[i] < large)
        {
            sLarge = a[i];
        }
    }
    return sLarge;
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
    int slarge = SecondLargest(a , n);
    cout << slarge <<  endl;

}