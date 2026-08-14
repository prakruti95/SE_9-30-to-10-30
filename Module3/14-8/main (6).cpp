#include <iostream>
using namespace std;

class Tops
{
    public:
    Tops()
    {
        cout<<"Constructor Called";  
    }
    void display()
    {
        cout<<"display Called";
    }
  
};

int main()
{
    
    cout<<"Main Method Called";
    Tops t1;
    Tops t2;
    Tops t3;
    
    
    return 0;
}