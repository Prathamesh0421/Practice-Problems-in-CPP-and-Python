// Creating and manipulating an Account object.

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

void displayAccount(Account accountToDisplay){

    cout<<"Account Name: "<< accountToDisplay.getName() << endl;
    cout<<"Account Balance: " << accountToDisplay.getBalance() << endl;
}

int main(){

    Account myAccount1{"Prathamesh Sawant",500};
    Account myAccount2{"Damon Salvatore",1000000};

    displayAccount(myAccount1);
    displayAccount(myAccount2);

    myAccount1.deposit(1000);
    displayAccount(myAccount1);

    myAccount2.withdraw(5000);
    displayAccount(myAccount2);

    

    
    return 0;
}
