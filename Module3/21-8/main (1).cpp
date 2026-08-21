#include <iostream>
using namespace std;

class Calc
{
    public:
    int count(int a,int b)
    {
        return a+b;
    }
    int count(int a,int b,int c)
    {
        return a*b*c;
    }
};
int main()
{
    Calc c1;
    cout<<c1.count(6,2)<<endl;
    cout<<c1.count(8,3,2)<<endl;
    
    return 0;
}

// Method Overloading : when two or more methods having a same name but number of parameters
// are diffrent

// Method Overriding : when two or more methods having a same name and number of parameters
// are also same

