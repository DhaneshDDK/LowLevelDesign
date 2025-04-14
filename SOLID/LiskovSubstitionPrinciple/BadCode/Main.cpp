#include<iostream>
#include "File.cpp"
#include "ReadOnlyFile.cpp"
using namespace std;

int main(){
    File* file = new File();
    file->read();
    file->write();
    delete file; // Clean up dynamically allocated memory
    ReadOnlyFile* readOnlyFile = new ReadOnlyFile();
    readOnlyFile->read();
    try {
        readOnlyFile->write(); // This will throw an exception
    } catch (const runtime_error& e) {
        cout << e.what() << endl; // Output: Cannot write to read-only file.
    }
    delete readOnlyFile; // Clean up dynamically allocated memory
    return 0;
}