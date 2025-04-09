#ifndef CARD_CPP
#define CARD_CPP

#include<iostream>
#include "PaymentMethod.cpp"
using namespace std;

class Card : public PaymentMethod{
   protected:
      int cardNumber;
      string cardHolderName;
      
      public: Card(const int &number, const string &name){
           this->cardNumber = number;
           this->cardHolderName = name;
      }

      public: int getCardNumber(){
           return cardNumber;
      }
      public: string getCardHolderName(){
           return cardHolderName;
      }
};

#endif