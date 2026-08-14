#include <iostream>
using namespace std;

class Tops
{
    public:
    int id;
    string name;
    Tops(int i,string n)
    {
       id = i;
       name = n;
    }
    
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
    
  
};

int main()
{
    
    Tops t1=Tops(101,"a");
    Tops t2=Tops(102,"b");
    Tops t3=Tops(103,"c");
    
    t1.display();
    t2.display();
    t3.display();
    
    
    
    
    
    return 0;
}