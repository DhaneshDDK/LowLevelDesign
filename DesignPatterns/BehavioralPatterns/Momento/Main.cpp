#include<iostream>
#include<string>
#include "TextEditor.cpp"
#include "History.cpp"

using namespace std;

int main(){
    TextEditor editor;
    History history;
    
    enum Action { WRITE, READ, UNDO };

    while(true) {
        cout << "Choose an action (0: Write, 1: Read, 2: Undo, 3: Exit): ";
        int choice;
        cin >> choice;

        if (choice == 3) {
            break;
        } else if (choice == WRITE) {
            string text;
            cout << "Enter text to write: ";
            cin.ignore(); // Clear the newline character from the input buffer
            getline(cin, text);
            editor.write(text);
            history.save(&editor);
            cout << "Text written." << editor.getContent()<< endl;
        } else if (choice == READ) {
            cout << "Current content: " << editor.getContent() << endl;
        } else if (choice == UNDO) {
            history.undo(&editor);
            cout << "After undo, current content: " << editor.getContent() << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

}