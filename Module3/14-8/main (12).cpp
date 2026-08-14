#include <iostream>
using namespace std;

class Tops
{
    public:
    Tops()
    {
        cout<<"Constructor Called";
    }
    ~Tops()
    {
        cout<<"Destructor Called";
    }
    
  
};

int main()
{
    Tops t1;
    
    return 0;
}