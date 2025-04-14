#ifndef PRINTER_CPP
#define PRINTER_CPP

#include<iostream>
#include "Document.cpp"

using namespace std;

class Printer{
    public:
   virtual void print(Document* doc) = 0; // Pure virtual function for printing
   virtual ~Printer(){} // Destructor
};

#endif