// Creating and manipulating an Account object.

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){

    Account myAccount;

    cout << "Initial account name is: "<< myAccount.getName() <<endl;
    string theName;
    getline(cin,theName);
    myAccount.setName(theName);

    cout << "Name in object account is: "<< myAccount.getName() << endl;

    
    return 0;
}
