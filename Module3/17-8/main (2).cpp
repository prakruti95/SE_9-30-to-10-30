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
class Current : public Bank
{
    public:
    void current()
    {
        cout<<"Current"<<endl;
    }
};
class Save : public Bank
{
    public:
    void save()
    {
        cout<<"saving"<<endl;
    }
};

int main()
{
   
    Current c;
    Save s;
    
    c.current();
    s.save();
    c.bank();

    return 0;
}