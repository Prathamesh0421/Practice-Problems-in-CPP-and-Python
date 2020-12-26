#include <iostream>
#include <string>

using namespace std;

class Invoice{

    public:

        Invoice(string partNumber, string partDescription, int partQuantity, double partPrice){
            
            number = partNumber;
            description = partDescription;
            quantity = partQuantity;
            price = partPrice;
            VAT = 0.20;
            discount = 0;
            
        }

        void setNumber(string partNumber){
            number = partNumber;
        }

        void setDescription(string partDescription){
            description = partDescription;
        }

        void setQuantity(int partQuantity){
            quantity = partQuantity;
        }

        void setPrice(double partPrice){
            price = partPrice;
        }

        void setVAT(double partVAT){
            VAT = partVAT;
        }

        void setDiscount(double partDiscount){
            discount = partDiscount;
        }

        string getNumber(){
            return number;
        }

        string getDescription(){
            return description;
        }

        int getQuantity(){
            return quantity;
        }

        double getPrice(){
            return price;
        }

        double getVAT(){
            return VAT;
        }

        double getDiscount(){
            return discount;
        }

        double getInvoiceAmount(){
            double totalPrice = price * quantity;
            double totalDiscount = totalPrice * (discount/100);
            double totalVAT = (totalPrice - totalDiscount) * (VAT/100);

            return totalPrice - totalDiscount - totalVAT;
        }        

    private:

        string number;
        string description;
        int quantity;
        double price;
        double VAT;
        double discount;
};