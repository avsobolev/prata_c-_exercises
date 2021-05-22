// 10_01_bank.h

#ifndef BANK_H_

#define BANK_H_
    #include <string>
    class BankAccount {
        private: 
            std::string AccountName;
            std::string AccountNumber;
            double AccountBalance;

        public:
            BankAccount(const std::string & Name="NewAccount", const std::string & Number="00000000000000000000", double Balance=0);
            void ShowBalance() const;
            void PutMoney(double sum);
            void GetMoney(double sum);
    };
#endif