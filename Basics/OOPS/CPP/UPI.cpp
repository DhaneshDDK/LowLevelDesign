#include<iostream>
#include "PaymentMethod.cpp"
using namespace std;

class UPI :public PaymentMethod{
    private:
      string upiID;
    public: 
    UPI(const string& upiId){
      this->upiID = upiId;
    }
    void processPayment(double amount) override{
        cout << "Processing UPI payment of $" << amount << " for UPI ID: " << upiID << endl;
    }
};