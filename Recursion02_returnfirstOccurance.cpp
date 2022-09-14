#include<iostream>
using namespace std;
int FirstOccurance(int *a , int n , int x)
{
    if(a[0]== x)
    {
        return 0;
    }
    if(n == 1)
    {
        return -1;
    }
    int ans = FirstOccurance(a+1 , n-1 , x);
    if(ans == -1)
    {
        return -1;
    }
    else
        return ans +1;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for(int i = 0 ; i < n ;  i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int i = FirstOccurance(a , n , x);
    cout << endl << i;
    delete []a;
    return 0;
    

}