#include<iostream>
using namespace std;

enum PaymentMethodType {
    CREDIT_CARD,
    DEBIT_CARD,
    UPI
};

// if new payment method is added, we need to modify the Payment class
// which violates the Open/Closed Principle (OCP) of SOLID principles.
class Payment {
public:
    void processPayment(PaymentMethodType paymentMethod, double amount) {
        switch (paymentMethod) {
            case PaymentMethodType::CREDIT_CARD:
                cout << "Processing credit card payment of amount: " << amount << endl;
                break;
            case PaymentMethodType::DEBIT_CARD:
                cout << "Processing debit card payment of amount: " << amount << endl;
                break;
            case PaymentMethodType::UPI:
                cout << "Processing UPI payment of amount: " << amount << endl;
                break;
            default:
                cout << "Invalid payment method!" << endl;
                break;
        }
    }
};


int main(){
    Payment paymentService;
    paymentService.processPayment(PaymentMethodType::CREDIT_CARD, 100.0);
    paymentService.processPayment(PaymentMethodType::DEBIT_CARD, 50.0);
    paymentService.processPayment(PaymentMethodType::UPI, 75.0);
    return 0;
}