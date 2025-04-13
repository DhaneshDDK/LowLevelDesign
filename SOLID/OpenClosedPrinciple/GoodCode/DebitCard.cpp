#ifndef DEBITCARD_CPP
#define DEBITCARD_CPP

#include <iostream>
#include "PaymentMethod.cpp"

using namespace std;

class DebitCard : public PaymentMethod {
    public:
    void pay(double amount) override {
        cout << "Processing debit card payment of $" << amount << endl;
    }   
};

#endif