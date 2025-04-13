#ifndef CREADITCARD_CPP
#define CREADITCARD_CPP


#include <iostream>
#include "PaymentMethod.cpp"
using namespace std;

class CreditCard : public PaymentMethod{
  public:
  void pay(double amount) override {
    cout << "Processing credit card payment of $" << amount << endl;
  }
};

#endif