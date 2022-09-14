#include<iostream>
using namespace std;
class Area
{
    int len;
    int bre;
    public:
    void setDim()
    {
        cin >> len >> bre ;
    }
    int  getArea()
    {
       int area = len * bre ;
        return area;
    }
};
int main()
{
   class Area obj;
   int area;
   cout <<" Enter the Length and breadth "<<endl;
   obj.setDim();
   area = obj.getArea();
   cout <<" Area of Rectangle :"<<area<<endl;
   return 0;
}