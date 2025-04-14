#ifndef READABLEFILE_CPP
#define READABLEFILE_CPP

#include<iostream>
#include "Readable.cpp"
using namespace std;

class ReadableFile :public Readable {
   public:
   void read() override {
      cout << "Reading read-only file..." << endl;
   }
};

#endif