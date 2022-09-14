#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    int i = 0;
    cin >>n;
    int largest = INT_MIN;
    int slarge = INT_MIN;
    int curr;
    while(i < n)
    {
        cin >> curr;
        if(curr > largest )
        {
            slarge = largest;
            largest = curr;
        }
        if(curr > slarge && curr < largest)
        {
            slarge = curr ;
        }
        i++;
    }
    cout <<"Second Largest is : "<< slarge;
}