#ifndef SIMPLEPRINTER_CPP
#define SIMPLEPRINTER_CPP

#include<iostream>
#include "Machine.cpp"
#include "Document.cpp"

using namespace std;

class SimplePrinter: public Machine{
    public:
        void copy(Document* doc) override {
            throw runtime_error("Copy function not supported in SimplePrinter.");
        }
        void print(Document* doc) override {
            cout << "Printing document..." << doc->getData() << endl;
        }
        void scan(Document* doc) override {
            throw runtime_error("Scan function not supported in SimplePrinter.");   
        }
};

#endif