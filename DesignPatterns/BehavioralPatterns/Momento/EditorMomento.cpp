#ifndef EDITORMOMENTO_CPP
#define EDITORMOMENTO_CPP

#include <iostream>
using namespace std;

class EditorMomento {
private:
    string content;
    public:
    EditorMomento(string str): content(str) {}
    string getContent() const {
        return content;
    }
};

#endif