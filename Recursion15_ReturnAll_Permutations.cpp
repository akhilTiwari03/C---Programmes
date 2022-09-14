#include<iostream>
#include<cstring>
using namespace std;

// Approach 1:-
/*
int ReturnAllPermutations(string s , string output[])
{
    int n =  s.size();
    if(n == 0)
    {
        output[0] = "";
        return 1;
    }
    int smalloutput;
    for(int i = 0 ; i <  n ; i++)
    {
        string substring = s.substr(0, i) + s.substr(i+1);
        string newoutput[1000];
        smalloutput = ReturnAllPermutations(substring , newoutput);
        for(int j = i*smalloutput ; j < (i*smalloutput) + smalloutput ; j++)
        {
            output[j] = s[i] + newoutput[j- (i*smalloutput)];
        }
    }
    return n * smalloutput; 
}*/

//   Approach 2:-
int ReturnAllPermutations(string s , string output[])
{
    int n = s.size();
    if(n == 0)
    {
        output[0] = "";
        return 1;
    }
    string newoutput[1000];
    int k = 0;
    int smalloutput = ReturnAllPermutations(s.substr(1) , newoutput);
    for(int i = 0 ; i < smalloutput ; i++)
    {
        for(int j = 0 ; j <= newoutput[i].length() ; j++)
        {
            output[k++] = newoutput[i].substr(0 , j) + s[0] + newoutput[i].substr(j);
        }
    } 
    return k;
}
int main()
{
    string a ;
    getline(cin , a);
    string output[1000];
    int c = ReturnAllPermutations(a , output);
    for(int i = 0 ; i < c ;  i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
