// This is a relationship where one class relies on another in some way, often through method
// parameters, return types or temporary association

#include<iostream>
using namespace std;

class Document{
   private:
   string content;
   public:
    Document(string content){
         this->content = content;
    };
    string getContent(){
         return this->content;
    };
};

class Printer{
   public:
    void print(Document& doc){
         cout << "Printing document: " << doc.getContent() << endl;
    };
};

int main(){
    Document doc("Hello, World!");
    Printer printer;
    printer.print(doc); // Dependency: Printer depends on Document to print
    return 0;
}