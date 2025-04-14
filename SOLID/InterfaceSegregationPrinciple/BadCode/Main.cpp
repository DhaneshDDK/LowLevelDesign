#include<iostream>
#include "Document.cpp"
#include "SimplePrinter.cpp"
#include "MultiPurposeMachine.cpp"
using namespace std;

int main(){
   Document* doc = new Document("My Document"); // Create a document
   Machine* simplePrinter = new SimplePrinter(); // Create a simple printer
   Machine* multiPurposeMachine = new MultiPurposeMachine(); // Create a multi-purpose machine
   try{
       simplePrinter->print(doc); // This will work
   } catch (const runtime_error& e) {
       cout << e.what() << endl; // Handle the error
   }

   try{
       simplePrinter->copy(doc); // This will throw an error
   }catch(const std::exception& e){
    std::cerr << e.what() << '\n';
   }

   try{
       simplePrinter->scan(doc); // This will throw an error
   }catch(const std::exception& e){
    std::cerr << e.what() << '\n';
   }
   

   try
   {
       multiPurposeMachine->print(doc); // This will work
       multiPurposeMachine->copy(doc); // This will work
       multiPurposeMachine->scan(doc); // This will work
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }

    delete doc; // Clean up
    delete simplePrinter; // Clean up
    delete multiPurposeMachine; // Clean up
    return 0;
   
}