#include <iostream>
using namespace std;

class Tops
{
    public:
    int id=0;
    string name="";
    Tops(int id,string name)
    {
       this->id = id;
       this->name = name;
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