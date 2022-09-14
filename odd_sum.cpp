#include <iostream>

using namespace std;
class factorial
{private:
int n,f=1;
public:

void cal()
{
cout<<"input the no"<<endl;
cin>>n;
while(n!=0)
{
f=f*n;
n--;
}

cout<<"factorial is: "<<f<<endl;

}


};

int main()
{ factorial data;
data.cal();
return 0;
}