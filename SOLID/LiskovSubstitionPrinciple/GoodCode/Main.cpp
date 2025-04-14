#include<iostream>
#include "ReadableFile.cpp"
#include "WriteableFile.cpp"
#include "ReadOnlyFile.cpp"

using namespace std;

int main(){
    ReadableFile readableFile;
    WriteableFile writeableFile;
    ReadOnlyFile readOnlyFile;

    readableFile.read(); // Output: Reading read-only file...
    writeableFile.write(); // Output: Writing to file...
    writeableFile.read(); // Output: Reading read-only file...
    readOnlyFile.read(); // Output: Reading read-only file...

    return 0;
}