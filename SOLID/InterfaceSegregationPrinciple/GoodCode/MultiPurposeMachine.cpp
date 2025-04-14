#ifndef MULTIPURPOSEMACHINE_CPP
#define MULTIPURPOSEMACHINE_CPP

#include<iostream>
#include "Printer.cpp"
#include "Scanner.cpp"
#include "Reader.cpp"

class MultiPurposeMachine: public Printer, public Scanner, public Reader {
    public:
        void copy(Document* doc) override {
            cout << "Copying document via multiple purpose printer..." << doc->getData() << endl;
        }
        void print(Document* doc) override {
            cout << "Printing document via multiple purpose printer..." << doc->getData() << endl;
        }
        void scan(Document* doc) override {
            cout << "Scanning document via multiple purpose printer..." << doc->getData() << endl;
        }
};

#endif