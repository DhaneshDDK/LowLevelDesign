#include "Card.cpp"
using namespace std;

class DebitCard : public Card{
    public: 
    DebitCard(const int &number, const string &name) : Card(number, name){}
    void processPayment(double amount) override{
        cout << "Processing debit card payment of $" << amount << " for card holder: " << getCardHolderName() << endl;
    }
};