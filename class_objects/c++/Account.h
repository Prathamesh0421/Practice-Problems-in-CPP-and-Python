#include <string>
#include <iostream>

class Account{
    public:
        Account(std::string accountName, double initialBalance)
            :name{accountName} {

                if(initialBalance > 0){
                    balance = initialBalance;
                }

        }

        void deposit(double depositAmount){
            if (depositAmount > 0)
            {
                balance = balance + depositAmount;
            }
            
        }

        void withdraw(double withdrawAmount){
            if (withdrawAmount > 0 && withdrawAmount <= balance)
            {
                balance = balance - withdrawAmount;
            }
            else
            {
                std::cout<<"Withdrawl amount exceeded account balance."<<std::endl;
            }
            
            
        }

        std::string getName() const{
            return name;
        }

        int getBalance() const{
            return balance;
        }

        void setName(std::string accountName){
            name = accountName;
        }

    private:
        std::string name;
        double balance{0};


        
};