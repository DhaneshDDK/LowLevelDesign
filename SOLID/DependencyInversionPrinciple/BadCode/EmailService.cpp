#ifndef EMAILSERVICE_CPP
#define EMAILSERVICE_CPP

#include<iostream>
using namespace std;

class EmailService{
public:
    void sendEmail(string message){
        cout << "Sending email: " << message << endl;
    }
};

#endif