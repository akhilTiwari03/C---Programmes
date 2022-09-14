#include<iostream>
#include<cstring>
using namespace std;

// Approach 1:-
/*
void PrintAllPermutations(string s , string output)
{
    int n =  s.size();
    if(n == 0)
    {
        cout << output << endl;
        return;
    }
    for(int i = 0 ; i < n ; i++)
    {
        PrintAllPermutations(s.substr(0 , i) + s.substr(i+1) , output + s[i]);
    }
}*/

//  Approach 2:-
void PrintAllPermutations(string s , string output)
{
    int n =  s.size();
    if(n == 0)
    {
        cout << output << endl;
        return;
    }
    for(int i = 0 ; i <= output.length() ; i++)
    {
        PrintAllPermutations(s.substr(1) , output.substr(0,i) + s[0] + output.substr(i));
    }
}
int main()
{
    string s;
    getline(cin , s);
    PrintAllPermutations(s , "");
    return 0;
}