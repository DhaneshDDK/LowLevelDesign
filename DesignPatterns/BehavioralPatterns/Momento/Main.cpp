#include<iostream>
#include<string>
#include "TextEditor.cpp"
#include "History.cpp"
#include<limits>

using namespace std;

int main(){
    TextEditor editor;
    History history;
    
    enum Action { WRITE, READ, UNDO, REDO, EXIT };

    while(true) {
        cout << "Choose an action (0: Write, 1: Read, 2: Undo, 3: Redo, 4: Exit): ";
        int choice;
        cin >> choice;


        if (cin.fail()) {
            cin.clear(); // Clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number between 0 and 4." << endl;
            continue; // Restart the loop
        }
        
        if (choice == EXIT) {
            break;
        } else if (choice == WRITE) {
            string text;
            cout << "Enter text to write: ";
            cin.ignore(); // Clear the newline character from the input buffer
            getline(cin, text);
            editor.write(text);
            history.save(&editor);
            cout << "Text written. " << editor.getContent()<< endl;
        } else if (choice == READ) {
            cout << "Current content: " << editor.getContent() << endl;
        } else if (choice == UNDO) {
            history.undo(&editor);
            cout << "After undo, current content: " << editor.getContent() << endl;
        } else if(choice == REDO) {
            history.redo(&editor);
            cout << "After redo, current content: " << editor.getContent() << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

}