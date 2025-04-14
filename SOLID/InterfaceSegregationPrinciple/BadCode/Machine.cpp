#ifndef MACHINE_CPP
#define MACHINE_CPP

#include<iostream>
#include "Document.cpp"
using namespace std;

class Machine{
    public:
   virtual void copy(Document* doc) = 0; // This is a bad design, as it forces all machines to implement this method
   virtual void print(Document* doc) = 0; 
   virtual void scan(Document* doc) = 0;
   virtual ~Machine(){} // Destructor
};
#endif