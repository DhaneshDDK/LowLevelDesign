#include<iostream>
#include "Document.cpp"
#include "SimplePrinter.cpp"
#include "MultiPurposeMachine.cpp"

using namespace std;

int main(){
    Document* doc = new Document("My Document");
    SimplePrinter* simplePrinter = new SimplePrinter(); 
    MultiPurposeMachine* multiPurposeMachine = new MultiPurposeMachine();

    simplePrinter->print(doc);

    multiPurposeMachine->print(doc);
    multiPurposeMachine->copy(doc);
    multiPurposeMachine->scan(doc);

    delete doc;
    delete simplePrinter;
    delete multiPurposeMachine;

    
    return 0;
}