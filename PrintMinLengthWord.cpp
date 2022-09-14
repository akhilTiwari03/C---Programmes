#include<iostream>
#include<cstdio>
#include<cstring>
#include<climits>
using namespace std;
void MInLength(string &a)
{
    int n =  a.size();
    int i = 0 , end = 0 , p , q , minLen = INT_MAX; 
    while(i < n)
    {
        int st = i;
        while(a[i] != ' ' && a[i] != '\0')
        {
            i++;
        }
        end = i;
        int len = end - st;
        if(len < minLen)
        {
            minLen = len;
            p = st;
            q = end;        
        }
        i++;
    }
    for(int i = p ; i < q ; i++)
    {
        cout << a[i] ;
    }
    cout << endl;
}
int main()
{
    string s;
    cout << " Enter the String Whose Min. Length Word You want :-> ";
    getline(cin , s);
    MInLength(s);
    return 0;
}