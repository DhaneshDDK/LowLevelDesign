#ifndef READABLE_CPP
#define READABLE_CPP

#include <iostream>
using namespace std;

class Readable{
   public:
   virtual void read() = 0; // Abstract method for reading
   virtual ~Readable(){}; // Virtual destructor for proper cleanup
};

#endif