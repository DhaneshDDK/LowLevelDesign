#ifndef PAYMENTMETHOD_CPP
#define PAYMENTMETHOD_CPP

class PaymentMethod {
    public: virtual void processPayment(double amount) = 0;
    virtual ~PaymentMethod() {}
};

#endif 