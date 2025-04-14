#ifndef DOCUMENT_CPP
#define DOCUMENT_CPP

#include<iostream>
using namespace std;

class Document{
    private:
    string data;
    public:
    Document(string d):data(d){} // Constructor
    string getData() const { return data; } // Getter for data
};

#endif