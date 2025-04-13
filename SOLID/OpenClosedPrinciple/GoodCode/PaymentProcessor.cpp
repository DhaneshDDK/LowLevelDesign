#ifndef PAYMENTPROCESSOR_CPP
#define PAYMENTPROCESSOR_CPP
#include <iostream>
#include "PaymentMethod.cpp"
using namespace std; 


class PaymentProcessor{
   public:
   void processPayment(PaymentMethod* paymentMethod, double amount){
        if(paymentMethod != nullptr){
            paymentMethod->pay(amount);
        } else {
            cout << "Invalid payment method!" << endl;
        }
    };
};

#endif