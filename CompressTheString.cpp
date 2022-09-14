// Input : - aaaaabbbbccd  Output : - a5b4c2d
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void Compress(string &a)
{
    string ans = "";
    int n =  a.size();
    int i = 0;
    int j = 0;
    while(j < n)
    {
        while(j < n && a[j] == a[i]){
            j++;
        }
        int tc = j - i;
        if(tc != 1)
        {
            ans += a[i];
            ans += char(tc + '0');
            ans += ' ';
        }
        else
        {    
            ans  += a[i];
            ans += ' ';
        }
        i =  j;
    }
    cout << ans ;
}
int main()
{
    string a;
    cout << "Enter the String You want To Compress : -";
    getline(cin , a);
    Compress(a);
    return 0;

}