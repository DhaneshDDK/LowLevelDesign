#ifndef SMSSERVICE_CPP
#define SMSSERVICE_CPP

#include<iostream>
using namespace std;

class SMSService{
public:
    void sendSMS(string message){
        cout << "Sending SMS: " << message << endl;
    }
};

#endif