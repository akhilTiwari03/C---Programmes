#include<iostream>
#include<cstring>
using namespace std;
string getstring(int n )
{
    if(n== 2)
    {
        return "abc";
    }
    else if(n== 3)
    {
        return "def";
    }
    else if(n== 4)
    {
        return "ghi";
    }
    else if(n== 5)
    {
        return "jkl";
    }
    else if(n== 6)
    {
        return "mno";
    }
    else if(n== 7)
    {
        return "pqrs";
    }
    else if(n== 8)
    {
        return "tuv";
    }
    else if(n== 9)
    {
        return "wxyz";
    }
    else
        return "";
}
int ReturnKeypad( int n , string output [])
{
    if(n == 0)
    {
        output[0] = "";
        return 1 ;
    }
    int lst = n%10;
    int size = ReturnKeypad(n/10 , output);
    string s = getstring(lst);
    int len = s.size(); 
    for(int i = 0 ; i < len-1 ; i++)
    {
        for(int j = 0 ; j< size ; j++)
        {
            output[j + (size *(i+1))] = output[j];
        }
    }
    int k = 0;
    for(int i = 0 ; i < len ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            output[k++] = output[k] + s[i];
        }
    }
    return k;
}
int main()
{
    int n;
    cin >> n;
    string *output  = new string[10000];
    int k = ReturnKeypad(n , output);
    for(int i = 0 ; i < k && i < 10000 ; i++)
    {
        cout << output[i] <<"  ";
    }
    delete []output;
    return 0;
}