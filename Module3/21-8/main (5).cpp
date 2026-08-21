#include <iostream>
using namespace std;

class Data
{
    public:
    static int count;
    
    Data()
    {
        count++;
        cout<<count<<endl;
    }
};
int Data::count = 0;
int main()
{
    Data d1= Data();
    Data d2= Data();
    Data d3= Data();
    
    return 0;
}

