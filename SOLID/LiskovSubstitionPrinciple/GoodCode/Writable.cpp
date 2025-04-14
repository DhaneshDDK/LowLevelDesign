#ifndef WRITEABLE_CPP
#define WRITEABLE_CPP

#include<iostream>
using namespace std;

class Writable{
   public:
   virtual void write() = 0; // Abstract method for writing
   virtual ~Writable(){}; // Virtual destructor for proper cleanup
};

#endif