#ifndef READONLYFILE_CPP
#define READONLYFILE_CPP

#include <iostream>
#include "File.cpp"
using namespace std;

class ReadOnlyFile :public File {
public:
   void read() override {
      cout << "Reading read-only file..." << endl;
   }
   void write() override {
      throw runtime_error("Cannot write to read-only file.");
   }
};

#endif