#include<iostream>
#include<cstring>
using namespace std;
void PrintAllCodes(string s , string output)
{
    if((s.empty()))
    {
        cout << output << endl; 
        return;
    }
    int  num = s[0] - '0' ;
    char c = num + 'a' - 1;
    PrintAllCodes(s.substr(1) , output + c);
    if(s[1] !='\0')
    {
        num = (num*10) + (s[1] - '0');
        if(num >= 10 && num <= 26)
        {
            c = num + 'a' - 1;
            PrintAllCodes(s.substr(2) ,  output + c);
        }
    }
}
int main()
{
    string s; 
    getline(cin , s);
    PrintAllCodes(s , "");
    return 0 ;
}