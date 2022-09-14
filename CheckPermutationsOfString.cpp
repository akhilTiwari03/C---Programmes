#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
bool CheckPermutations(char s1[] , char s2[])
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    if(n1 != n2)
    {
        return false;
    }
    int ct1[256] = {0}; // There are 256 total characters including symbols
    int ct2[256] = {0};
    for(int i = 0 ; i < n1 ; i++)
    {
        ct1[s1[i]]++;
    }
    for(int i = 0 ; i < n2 ; i++)
    {
        ct2[s2[i]]++;
    }
    for(int i = 0 ; i < 256 ; i++)
    {
        if(ct1[i] != ct2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char s1[100];
    char s2[100];
    cin.getline(s1 ,100);
    cin.getline(s2 ,100);
    bool  flag = CheckPermutations(s1 , s2);
    if(flag)
    {
        cout <<"Is a Permutation";
    }
    else
        cout << "Is Not a Permutation";
    return 0;

}