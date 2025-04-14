#ifndef READER_CPP
#define READER_CPP

#include<iostream>
#include "Document.cpp"

using namespace std;

class Reader{
    public:
   virtual void copy(Document* doc) = 0; // Pure virtual function for printing
   virtual ~Reader(){} // Destructor
};

#endif