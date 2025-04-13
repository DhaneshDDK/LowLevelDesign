#ifndef UPI_CPP
#define UPI_CPP

#include <iostream>
#include "PaymentMethod.cpp"
using namespace std;

class UPI : public PaymentMethod{
  public:
  void pay(double amount) override{
    cout << "Processing UPI payment of $" << amount << endl;
  }
};

#endif