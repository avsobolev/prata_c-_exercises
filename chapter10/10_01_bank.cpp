// 10_01_bank.cpp

#include <iostream>
#include <string>
#include "10_01_bank.h"


BankAccount::BankAccount(const std::string & Name, const std::string & Number, double Balance){
    AccountName = Name;
    AccountNumber = Number;
    if (Balance < 0) {
        std::cout << "Error Create: balance can't be negative (" << Balance << "). Set Balance = 0." << std::endl;
        AccountBalance = 0;    
    }
    else {
        AccountBalance = Balance;
    }
} // BankAccount::BankAccount()


void BankAccount::ShowBalance() const {
    using std::cout; 
    using std::endl;
    cout << "Data about balance - " << AccountName << ":" << endl; 
    cout << " - account number: " << AccountNumber << endl;
    cout << " - balance: " << AccountBalance << endl;
} // void BankAccount::ShowBalance()


void BankAccount::PutMoney(double sum){
    if (sum<0) {
        std::cout << "Error Put: sum (" << sum << ") is negative. Operation failed." << std::endl;
    }
    else {
        AccountBalance += sum;
    }
    
} // void BankAccount::PutMoney()


void BankAccount::GetMoney(double sum){
    if (sum<0) {
        std::cout << "Error Get: sum (" << sum << ") is negative. Operation failed." << std::endl;
    }
    else if (AccountBalance >= sum) {
        AccountBalance -= sum;
    }
    else
    {
        std::cout << "Error Get: not enough money (" << sum << ") in the account.\n";
    }
} // void BankAccount::GetMoney()