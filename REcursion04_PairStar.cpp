// Input - hellpper  Output -  hel*lp*per
#include<iostream>
#include<cstring>
using namespace std;
void PairStar(char a[])
{
    int n = strlen(a);
    if(n== 1)
        return;
    PairStar(a+1);
    if(a[0] == a[1] && a[1] !='\0')
    {
        int i =  strlen(a);
        while(i > 0)
        {
            a[i+1] = a[i];
            i--;
        }
        a[1] ='*';
    }

}
int main()
{
    char a[200];
    cin.getline(a , 200);
    PairStar(a);
    cout << a;
    return 0;
}