#include<iostream>
using namespace std;

class student
{
   public:
   int num;
   
   void display()
   {
       cout<<num;
   }
};
int main()
{
    student s1;
    s1.num=10;
    s1.display();
    return 0;
}