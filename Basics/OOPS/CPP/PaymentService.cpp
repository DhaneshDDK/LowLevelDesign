#include<iostream>
#include<map>
#include "PaymentMethod.cpp"
using namespace std;


class PaymentService{
    private: map<string, PaymentMethod*> paymentMethods;
    public: 
    PaymentService(){}
    ~PaymentService(){
        for(auto &pair : paymentMethods){
            delete pair.second;
        }
        paymentMethods.clear();
    }
    void addPaymentMethod(string &name, PaymentMethod* paymentMethod){
        paymentMethods[name] = paymentMethod;
        cout<< "Payment method added: " << name << endl;
    }
    void makePayment(const string &name, const double &amount){
        if(paymentMethods.find(name) != paymentMethods.end()) {
            paymentMethods[name]->processPayment(amount);
        } else {
            cout << "Payment method not found!" << endl;
        }
    }
};