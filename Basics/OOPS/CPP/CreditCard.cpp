#include<iostream>
#include "Card.cpp"
using namespace std;

class CreditCard : public Card{
     public: 
     CreditCard(const int &number, const string &name) : Card(number, name){}
     
     void processPayment(double amount) override{
            cout << "Processing credit card payment of $" << amount << " for card holder: " << getCardHolderName() << endl;
     }
};