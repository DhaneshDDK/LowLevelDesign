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

   double getAmount(){
       return amount;
   };
};

#endif