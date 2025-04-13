#ifndef INVOICE_CPP
#define INVOICE_CPP

#include <iostream>
using namespace std;

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