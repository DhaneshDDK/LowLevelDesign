#include<iostream>
#include "PaymentService.cpp"
#include "CreditCard.cpp"
#include "DebitCard.cpp"
#include "UPI.cpp"
using namespace std;

int main(){
    PaymentService* paymentService = new PaymentService();
    string creditCard = "CreditCard";
    string debitCard = "DebitCard";
    string upi = "UPI";
    paymentService->addPaymentMethod(upi, new UPI("user@upi"));
    paymentService->addPaymentMethod(creditCard, new CreditCard(12340, "John Doe"));
    paymentService->addPaymentMethod(debitCard, new DebitCard(98765, "Jane Doe"));

    paymentService->makePayment(creditCard, 100.0);
    paymentService->makePayment(debitCard, 50.0);
    paymentService->makePayment(upi, 75.0);
    return 0;
    delete paymentService;
}