#ifndef FILE_CPP
#define FILE_CPP

#include <iostream>
using namespace std;

class File{
   
    public:
    virtual void read(){
        cout<<"Reading file..."<<endl;
    }
    virtual void write(){
        cout<<"Writing to file..."<<endl;
    }
    virtual ~File(){}
};

#endif