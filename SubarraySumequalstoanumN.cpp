#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s; // s is a given number which is equal to a given sub-array sum
    cin >> n >> s;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    int i = 0 , j = 0 , st = -1 , end = -1 , sum = 0 ;
    while(j<n && (sum + arr[j] <= s) )
    {
        sum += arr[j];
        j++;
    }
    if(sum == s)
    {
        cout<< i+1 << " "<<j <<endl; // as j is already one step forword in prev. loop thatswhy it is not incremnted in cout
        return 0;
    }
    while(j<n)
    {
        sum +=arr[j];
        while(sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            st = i+1;
            end = j+1;
            break;
        }
        j++;
    }
    cout<<st <<" "<<end<<endl;
    return 0;
}