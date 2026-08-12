#include<iostream>
using namespace std;

class student
{
   public:
   int id;
   string name;
   string city;
   
  void display()
  {
      cout<<id<<" "<<name<<" "<<city;
  }
};
int main()
{
    student s1;
    student s2;
    
    s1.id=101;
    s1.name="riya";
    s1.city="rajkot";
    
    s2.id=102;
    s2.name="riya1";
    s2.city="rajkot1";
    
    // cout<<s1.id<<endl;
    // cout<<s1.name<<endl;
    // cout<<s1.city<<endl;
    
    //   cout<<s2.id<<endl;
    // cout<<s2.name<<endl;
    // cout<<s2.city<<endl;
    
    
    s1.display();
    s2.display();
    
    
    return 0;
}