#ifndef SCANNER_CPP
#define SCANNER_CPP

#include<iostream>
#include "Document.cpp"

using namespace std;

class Scanner{
    public:
   virtual void scan(Document* doc) = 0; // Pure virtual function for printing
   virtual ~Scanner(){} // Destructor
};

#endif