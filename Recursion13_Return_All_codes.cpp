#include<iostream>
#include<cstring>
using namespace std;
int ReturnAllCodes(string s , string output[])
{
    string o1[1010];
    string o2[1010];
    if(s.size() == 0)
    {
        output[0] = "";
        return 1;
    }
    int s1 = ReturnAllCodes(s.substr(1) , o1);
    char c1 = s[0] - '0' + 'a' - 1;
    for(int i = 0 ; i <s1 ;  i++)
    {
        output[i] = c1 + o1[i];
    }
    int s2 = 0;
    char c2 ;
    int n = 10*(s[0] - '0') + s[1] - '0';
    if(n >=10 && n <=26)
    {
        c2 = n + 'a' -1;
        s2 = ReturnAllCodes(s.substr(2) , o2);
        for(int i = 0 ;  i <  s2 ; i++)
        {
            output[s1+i] = c2 + o2[i];
        }
    }
    return s1+s2;
}
int main()
{
    string s;
    getline(cin ,  s);
    string output[10000];
    int c = ReturnAllCodes(s , output);
    for(int i = 0 ; i < c ; i++)
    {
        cout << output[i] << endl;
    }
    return 0;

}
