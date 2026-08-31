#include <iostream>
using namespace std;

class Base 
{
    protected:
    int protectedValue = 42; // Accessible to child classes, hidden from outside

  
};

class Derived : public Base 
{
    public:
    void display() 
    {
        // Allowed: Derived class accessing protected member from Base
        cout << "Value: " << protectedValue << endl; 
    }
};

int main() 
{
    Derived obj;
    obj.display(); // Works fine

    // //obj.protectedValue = 10; 
    // obj.display();
    // ERROR: 'int Base::protectedValue' is protected within this context
   // Base b;
  //  b.display();
    return 0;
}
