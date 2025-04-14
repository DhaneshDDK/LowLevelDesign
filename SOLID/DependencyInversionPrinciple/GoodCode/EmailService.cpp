#ifndef EMAILSERVICE_CPP
#define EMAILSERVICE_CPP

#include <iostream>
#include "Sender.cpp"

using namespace std;

class EmailService : public Sender {
    public:
    void send(string message) override{
        cout << "Sending email: " << message << endl;
    }
};

#endif