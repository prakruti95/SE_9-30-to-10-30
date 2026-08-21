#include <iostream>
using namespace std;

class Calc
{
    public:
    int count(int a,int b)
    {
        return a+b;
    }
    double count(double a,double b)
    {
        return a*b;
    }
};
int main()
{
    Calc c1;
    cout<<c1.count(6,2)<<endl;
    cout<<c1.count(8.0,3.0)<<endl;
    
    return 0;
}

// Method Overloading : when two or more methods having a same name but number of parameters
// are diffrent

// Method Overriding : when two or more methods having a same name and number of parameters
// are also same

