#include <iostream>
using namespace std;

class Bank
{
  public:
  void bank()
  {
      cout<<"Banking"<<endl;
  }
};
class Current 
{
    public:
    void current()
    {
        cout<<"Current"<<endl;
    }
};
class Save : public Current, public Bank
{
    public:
    void save()
    {
        cout<<"saving"<<endl;
    }
};

int main()
{
   
   Save s;
   
   s.save();
   s.bank();
   s.current();

    return 0;
}