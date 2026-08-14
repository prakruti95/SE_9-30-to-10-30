#include <iostream>
using namespace std;

class Tops
{
   
    public:
    int x,y;
    
    Tops()
    {
        cout << "Default constructor called!";
    }
    Tops(int a, int b)
    {
        cout << "Parametrized Constructor called!\n";
        x = a;
        y = b;
    }
    Tops(const Tops &a1)
    {
        // old is the old object being passed
        x = a1.x; //This object's x to old object's x
        y = a1.y;

        cout << "Copy Constructor called!\n";
    }
    void print()
    {
        cout << x << " " << y << "\n";
    }
    
    
  
};

int main()
{
   
    Tops t1 = Tops(10,20);
    Tops t2 = Tops(t1);
    
    t2.print();
    
    
    return 0;
}