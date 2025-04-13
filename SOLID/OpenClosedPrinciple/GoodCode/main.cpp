#include<iostream>
#include "PaymentProcessor.cpp"
#include "PaymentMethod.cpp"
#include "CreditCard.cpp"
#include "DebitCard.cpp"
#include "UPI.cpp"

using namespace std;

int main(){
    PaymentProcessor paymentProcessor;
    PaymentMethod* creditCard = new CreditCard();
    double amount = 100.0;
    paymentProcessor.processPayment(creditCard, amount);
    PaymentMethod* debitCard = new DebitCard();
    paymentProcessor.processPayment(debitCard, amount);
    PaymentMethod* upi = new UPI();
    paymentProcessor.processPayment(upi, amount);
    delete upi; // Clean up dynamically allocated memory
    delete creditCard; // Clean up dynamically allocated memory
    delete debitCard; // Clean up dynamically allocated memory
    return 0;
}