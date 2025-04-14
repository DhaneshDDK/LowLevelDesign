#ifndef MULTIPURPOSEMACHINE_CPP
#define MULTIPURPOSEMACHINE_CPP

#include<iostream>
#include "Machine.cpp"
#include "Document.cpp"

using namespace std;

class MultiPurposeMachine: public Machine {
    public:
        void copy(Document* doc) override {
            cout << "Copying document..." << doc->getData() << endl;
        }
        void print(Document* doc) override {
            cout << "Printing document..." << doc->getData() << endl;
        }
        void scan(Document* doc) override {
            cout << "Scanning document..." << doc->getData() << endl;
        }
};

#endif