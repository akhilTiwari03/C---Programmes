#include<iostream>
using namespace std;
class cal
{
int a[6]={1,2,3,4,5,6},s=0,m=1;
public:
void sum()
{
for(int i=0;i<6;i++)
{
s=s+a[i];
}
}

void pro()
{
for(int i=0;i<6;i++)
{
m=m*a[i];
}
}

void output()
{
cout<<"sum="<<s<<"product="<<m;
}
};

int main()
{
cal
obj;
obj.sum();
obj.pro();
obj.output();
}
