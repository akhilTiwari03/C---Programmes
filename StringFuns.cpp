#include <iostream>
#include <string>
using namespace std;

int main()
{
/*string name; // string - defined data-type already available

cout << "Capacity of the variable is : " << name.capacity() << endl;
cout << "Length of the string is : " << name.length() << endl;

cout << "Input the user name" << endl;
getline(cin,name);

cout << "Capacity of the variable is : " << name.capacity() << endl;
cout << "Length of the string is : " << name.length() << endl;

name.push_back('$');
name.push_back('$');
name.push_back('$');
name.push_back('$');
name.push_back('$');
name.push_back('$');
name.pop_back();
cout << "Capacity of the variable is : " << name.capacity() << endl;
cout << "Length of the string is : " << name.length() << endl;

name.resize(6);
cout << endl << "Name after resizing: " << name << endl;
cout << "Capacity of the variable is : " << name.capacity() << endl;
cout << "Length of the string is : " << name.length() << endl;
cout<<endl;


cout << "Input the user name" << endl;
getline(cin,name);

string::iterator it; // char* ptr; it -> address

for(it = name.begin() ; it != name.end(); it++)
{
cout << *it; // it -> memory address name[it]
}
cout << endl;

string::reverse_iterator ri;
for(ri = name.rbegin(); ri != name.rend(); ri++)
{
cout << *ri;
}*/


string abc;
string def;
abc = " akhil";
def = " tiwari";

abc.swap(def);
cout<<abc<<endl<<def<<endl;

char first[10];
def.copy(first , 5 ,0); //first resembles def is copy to first , 5 resembles ther copy length , 0 resembles copy from position in def
cout<<first<<endl;



string a;
string b;
a="akhil";
b="akhil";
if(a.compare(b) == 0)
{
    cout<<"Strings are Equal"<<endl;
}
else 
cout<<"Strings are unequal"<<endl;


cout<<"Find h's position or index in def "<<def.find('h');
cout<<"Find h's position or index in def from last  "<<def.rfind('h');


cout<<"Find first occurance of h def "<<def.find_first_of('h');
cout<<"Find last occurance of h in def from last  "<<def.find_last_of('h');

return 0;
}