#ifndef SENDER_CPP
#define SENDER_CPP

#include <iostream>
using namespace std;

class Sender{
    public:
    virtual void send(string message) = 0;
    virtual ~Sender(){};
};

#endif