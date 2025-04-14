#ifndef SMSSERVICE_CPP
#define SMSSERVICE_CPP

#include<iostream>
#include "Sender.cpp"

using namespace std;

class SMSService : public Sender {
    public:
    void send(string message) override{
        cout << "Sending SMS: " << message << endl;
    }
};

#endif