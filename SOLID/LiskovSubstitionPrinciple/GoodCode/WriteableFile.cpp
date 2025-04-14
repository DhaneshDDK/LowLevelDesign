#ifndef FILE_CPP
#define FILE_CPP

#include <iostream>
#include "ReadOnlyFile.cpp"
#include "Writable.cpp"
using namespace std;

class WriteableFile : public ReadOnlyFile, public Writable {
   public: 
   void write() override {
      cout << "Writing to file..." << endl;
   }
};

#endif