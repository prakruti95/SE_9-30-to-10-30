#include <iostream>
using namespace std;
class Data
{
    public:
    int a;
    int b;
    
    void getdetails(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    
    
};

class AR :public Data
{
     public:
    void ar()
    {
        int ans = a*b;
        cout<<"Area of Rectangle is: "<<ans<<endl;
    }
};
class AT :public Data
{
     public:
    void at()
    {
        int ans = 0.5*a*b;
        cout<<"Area of Rectangle is: "<<ans<<endl;
    }
};



int main()
{
    int a,b;
    AR a1;
    AT a2;
    
    
    
    cout<<"Enter Value for a";
    cin>>a;
    
    cout<<"Enter Value for b";
    cin>>b;
    
    
    a1.getdetails(a,b);
    a2.getdetails(a,b);
    a1.ar();
    a2.at();

    return 0;
}