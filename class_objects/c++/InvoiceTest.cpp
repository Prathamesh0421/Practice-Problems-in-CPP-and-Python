#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

void displayInvoice(Invoice invoiceToDisplay){
    cout << "Part Number:" << invoiceToDisplay.getNumber() << endl;
    cout << "Part Description:" << invoiceToDisplay.getDescription() << endl;
    cout << "Part Price:" << invoiceToDisplay.getPrice() << endl;
    cout << "Part Quantity:" << invoiceToDisplay.getQuantity() << endl;
    cout << "VAT:" << invoiceToDisplay.getVAT() << endl;
    cout << "Discount:" << invoiceToDisplay.getDiscount() << endl;
    cout << "Total:" << invoiceToDisplay.getInvoiceAmount() << endl;
    cout << endl;


}

int main(){

    Invoice i1{"1","Tyre",4,100};
    Invoice i2{"4","mirror",2,30};

    displayInvoice(i1);
    displayInvoice(i2);
    

}