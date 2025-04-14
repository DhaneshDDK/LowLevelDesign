#ifndef SIMPLEPRINTER_CPP
#define SIMPLEPRINTER_CPP

#include<iostream>
#include "Document.cpp"
#include "Printer.cpp"
using namespace std;

class SimplePrinter : public Printer{
   public:
   void print(Document* doc) override {
       cout << "Printing document via simple printer..." << doc->getData() << endl;
   }
};

#endif