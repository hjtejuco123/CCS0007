#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_ACCOUNTS = 5;

// Function prototypes
void initializeAccounts(double balances[], int size);
void displayAccounts(const double balances[], int size);
void deposit(double balances[], int size);
void withdraw(double balances[], int size);
void checkBalance(const double balances[], int size);
void transfer(double balances[], int size);

int main() {
    double accounts[MAX_ACCOUNTS];
    initializeAccounts(accounts, MAX_ACCOUNTS);

    int choice;
    do {
        cout << "\n===== Banking System =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Transfer Funds\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: deposit(accounts, MAX_ACCOUNTS); break;
            case 2: withdraw(accounts, MAX_ACCOUNTS); break;
            case 3: checkBalance(accounts, MAX_ACCOUNTS); break;
            case 4: transfer(accounts, MAX_ACCOUNTS); break;
            case 5: displayAccounts(accounts, MAX_ACCOUNTS); break;
            case 6: cout << "Thank you for banking with us!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}

// Initialize all account balances to 0
void initializeAccounts(double balances[], int size) {
    for (int i = 0; i < size; i++) {
        balances[i] = 0.0;
    }
}

// Display all account balances
void displayAccounts(const double balances[], int size) {
    cout << "\n--- Account Balances ---\n";
    for (int i = 0; i < size; i++) {
        cout << "Account " << (i + 1) << ": $" << fixed << setprecision(2) << balances[i] << endl;
    }
}

// Deposit function
void deposit(double balances[], int size) {
    int acc;
    double amount;
    cout << "Enter account number (1-" << size << "): ";
    cin >> acc;
    if (acc < 1 || acc > size) {
        cout << "Invalid account number!\n";
        return;
    }
    cout << "Enter deposit amount: $";
    cin >> amount;
    if (amount <= 0) {
        cout << "Amount must be positive!\n";
        return;
    }
    balances[acc - 1] += amount;
    cout << "Deposit successful! New balance: $" << fixed << setprecision(2) << balances[acc - 1] << endl;
}

// Withdraw function
void withdraw(double balances[], int size) {
    int acc;
    double amount;
    cout << "Enter account number (1-" << size << "): ";
    cin >> acc;
    if (acc < 1 || acc > size) {
        cout << "Invalid account number!\n";
        return;
    }
    cout << "Current balance: $" << fixed << setprecision(2) << balances[acc - 1] << endl;
    cout << "Enter withdrawal amount: $";
    cin >> amount;
    if (amount <= 0) {
        cout << "Amount must be positive!\n";
        return;
    }
    if (amount > balances[acc - 1]) {
        cout << "Insufficient funds!\n";
        return;
    }
    balances[acc - 1] -= amount;
    cout << "Withdrawal successful! New balance: $" << fixed << setprecision(2) << balances[acc - 1] << endl;
}

// Check balance of a specific account
void checkBalance(const double balances[], int size) {
    int acc;
    cout << "Enter account number (1-" << size << "): ";
    cin >> acc;
    if (acc < 1 || acc > size) {
        cout << "Invalid account number!\n";
        return;
    }
    cout << "Account " << acc << " balance: $" << fixed << setprecision(2) << balances[acc - 1] << endl;
}

// Transfer funds between two accounts
void transfer(double balances[], int size) {
    int from, to;
    double amount;
    cout << "Transfer from account (1-" << size << "): ";
    cin >> from;
    cout << "Transfer to account (1-" << size << "): ";
    cin >> to;

    if (from < 1 || from > size || to < 1 || to > size || from == to) {
        cout << "Invalid account(s) or same source/destination!\n";
        return;
    }

    cout << "Current balance in Account " << from << ": $" << fixed << setprecision(2) << balances[from - 1] << endl;
    cout << "Enter transfer amount: $";
    cin >> amount;

    if (amount <= 0) {
        cout << "Amount must be positive!\n";
        return;
    }
    if (amount > balances[from - 1]) {
        cout << "Insufficient funds in source account!\n";
        return;
    }

    balances[from - 1] -= amount;
    balances[to - 1] += amount;
    cout << "Transfer successful!\n";
    cout << "New balance in Account " << from << ": $" << balances[from - 1] << endl;
    cout << "New balance in Account " << to << ": $" << balances[to - 1] << endl;
}
