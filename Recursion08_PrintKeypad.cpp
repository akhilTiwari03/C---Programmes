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
void PrintKeypad(int n , string output)
{
    if(n == 0)
    {
        cout << output << endl;
        return;
    }
    int lst = n %10;
    string s = getstring(lst);
    int len = s.size();
    for(int i = 0 ; i< len ; i++)
    {
        PrintKeypad(n/10 , s[i] + output);
    }
    
}
int main()
{
    int n ;
    string output = "";
    cin >> n;
    PrintKeypad(n , output);
    return  0;
}
