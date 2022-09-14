#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void RemoveOcuurances(char s[] , char a)
{
    int n =  strlen(s);
    int j = 0 , i = 0;
    while(i < n)
    {
        if(s[i] == a)
        {
            i++;
        }
        else
        {
            s[j] = s[i];
            i++;
            j++;
        }
        if(i == strlen(s))
        {
            s[j] = '\0';
        }
    }
}
int main()
{
    char s[100];
    char a;
    cout << " Enter the String : ";
    cin.getline(s , 100);
    cout <<"Enter the Character you want to Remove : ";
    cin >> a;
    RemoveOcuurances(s , a);
    cout << s ;
    return 0;



}

