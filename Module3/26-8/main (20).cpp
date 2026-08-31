#include <iostream>
using namespace std;

class BankAccount 
{
    private:
    int balance; // Private variable cannot be accessed directly outside

    public:
    // Constructor to initialize balance
    BankAccount(int initial_balance) 
    {
        balance = initial_balance;
    }

    // Declaring the friend function inside the class
     friend void showBalance(BankAccount account);
};

// Defining the friend function outside the class (No 'friend' keyword here)
void showBalance(BankAccount account) 
{
    // Directly accessing the private member 'balance'
    cout << "The account balance is: $" << account.balance << endl;
}

int main() 
{
    BankAccount myAccount=BankAccount(5000);

    // Call the friend function like a normal global function
    showBalance(myAccount); 

    return 0;
}
