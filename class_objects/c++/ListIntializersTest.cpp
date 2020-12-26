#include <iostream>
#include <string>
#include "ListIntializers.h"

using namespace std;

void displayAccount(ListInitializers accountToDisplay){

    cout << "Account Number: " << accountToDisplay.getNumber() << endl;
    cout << "First Name:" << accountToDisplay.getFirstName() << endl;
    cout << "Last Name:" << accountToDisplay.getLastName() << endl;
    cout << "Account Balance:" << accountToDisplay.getBalance() << endl;
}

int main(){

    ListInitializers ls{23975718,"Prathamesh","Sawant",10000000};

    displayAccount(ls);

     return 0;
}