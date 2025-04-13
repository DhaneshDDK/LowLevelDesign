#ifndef INVOICE_CPP
#define INVOICE_CPP

#include <iostream>
using namespace std;

// single responsibility principle - each class should have one reason to change
// invoice class should only be responsible for generating invoice and not for saving to database or sending email
// this is a bad code example as it violates the single responsibility principle
class Invoice{
   private:
   double amount;
   public:
   Invoice(double amount) : amount(amount){};
   
   void generateInvoice(){
       cout << "Generating invoice for amount: $" << amount << endl;
   };

   void saveToDatabase(){
         cout << "Saving invoice to database." << endl;
   }

   void sendEmail(){
         cout << "Sending invoice via email." << endl;
   }    

};


int main(){
    Invoice invoice(100.0);
    invoice.generateInvoice();
    invoice.saveToDatabase();
    invoice.sendEmail();
    return 0;
}

#endif