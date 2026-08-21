#include <iostream>
using namespace std;

class Rbi
{
    public:
    virtual int rate()
    {
        return 0;
    }
};
class Sbi : public Rbi
{
     public:
    int rate()
    {
        return 7;
    }
};
class Icici : public Rbi
{
     public:
    int rate()
    {
        return 8;
    }
};
class Axis : public Rbi
{
     public:
    int rate()
    {
        return 9;
    }
};

int main()
{
    //  Sbi s;
    //  Icici i;
    //  Axis a;
     Rbi *r;
    
    r= new Sbi();
    cout<<r->rate()<<endl;
    delete r;
    
    r= new Icici();
    cout<<r->rate()<<endl;
     delete r;
     
    r= new Axis();
    cout<<r->rate()<<endl;
    delete r;
    
    cout<<r->rate()<<endl;
    return 0;
}

