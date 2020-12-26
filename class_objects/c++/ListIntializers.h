#include <iostream>
#include <string>

using namespace std;

class ListInitializers{

    public:

        ListInitializers(unsigned int accountNumber, string userFirstName, string userLastName,
            double accountBalance) : number{accountNumber}, firstName{userFirstName},
            lastName{userLastName}, balance{accountBalance} {


            }

        
        unsigned int getNumber(){
            return number;
        }

        string getFirstName(){
            return firstName;
        }

        string getLastName(){
            return lastName;
        }

        double getBalance(){
            return balance;
        }

    private:

        unsigned int number;
        string firstName;
        string lastName;
        double balance;

};