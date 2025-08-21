#include <iostream>
using namespace std;

// BankAccount class
class BankAccount
{
   private:
    double balance; // private data member

   public:
    // Constructor to initialize balance
    BankAccount(double initialBalance)
    {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
        {
            balance = 0;
            cout << "Initial balance invalid. Setting balance to 0.\n";
        }
    }

    // Function to deposit amount
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Deposit amount must be positive.\n";
        }
    }

    // Function to withdraw amount
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount.\n";
        }
    }

    // Function to display current balance
    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

// Main function
int main()
{
    BankAccount account(1000); // Creating object with initial balance

    account.displayBalance();  // Show balance
    account.deposit(500);      // Deposit money
    account.withdraw(300);     // Withdraw money
    account.withdraw(1500);    // Invalid withdrawal
    account.displayBalance();  // Final balance

    return 0;
}
