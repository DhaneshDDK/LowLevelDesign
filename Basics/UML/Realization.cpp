// Realization: A class implements the behavior defined by an interface

#include <iostream>
#include <string>   
using namespace std;

class PaymentMethod{
    public:
    virtual void pay(double amount) = 0;
    virtual ~PaymentMethod(){};
};

class CreditCard : public PaymentMethod{
    private:
        int cardNumber;
        string cardHolderName;
    public:
        CreditCard(int number, string name) : cardNumber(number), cardHolderName(name) {}
        void pay(double amount) override {
            cout << "Processing credit card payment of $" << amount << " for card holder: " << cardHolderName << endl;
        }
};

int main(){
    PaymentMethod* payment = new CreditCard(123456789, "John Doe");
    payment->pay(100.0); // Output: Processing credit card payment of $100 for card holder: John Doe
    delete payment; // Clean up dynamically allocated memory
    return 0;
}

