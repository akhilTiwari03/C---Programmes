#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    char arr[n+1]; //as last char of array is the nullchar 
    cin>>arr;
    bool flag =1;
    int i=0;
    while(arr[i] != '\0' && i<n+1)
    {    if(arr[i] != arr[n-1-i])
        {
            flag =0;
            break;
        }
        i++;
    }
    if(flag == true)
    {
        cout<<"Word is a Palindrome !"<<endl;
    }
    else
    cout<<"Word is not a Palindrome !"<<endl;
    return 0;
}