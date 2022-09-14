#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,c=101; 
    const long  int pi=3.14028975657566;
    char b[4];
    cout<<"Input the Roll No. and name of the student";
    cin>>a;
    cin>>ws>>b;
    cout<<"\nRoll No And Name are:"<<a<<endl<<b<<endl;
    cout<<"Setw()10 will reserve 8 space char before 42"<<setw(10)<<42<<endl;
    cout<<"Setfill() * will fill any char upto number until setw is encountered "<<100<<setfill('*')<<setw(15)<<100<<endl;
    cout<<"It will print number upto 10 decimal places because by default we can print upto 6 places only: "<<setprecision(10)<<pi;
    cout<<" Conversion betwween decimal to octal and others by default it is decimal:"<<setbase(16)<<c;
}