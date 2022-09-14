#include<iostream>
using namespace std;
void PrintSubset(int *a , int n , int *output , int m)
{
    if(n == 0)
    {
        for(int i = 0; i < m ; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return ;
    }
    int newoutput[3000];
    for(int i = 0 ; i < m ; i++)
    {
        newoutput[i] = output[i];
    }
    newoutput[m] = a[0];
    PrintSubset(a+1 , n-1 , output , m);
    PrintSubset(a+1 , n-1 , newoutput , m+1);

}
int main()
{
    int n ;
    cin>> n;
    int *a = new int [n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int *output = new int [3500];
    PrintSubset(a , n , output , 0);
    delete [] output;
    delete [] a;
    return 0;
}