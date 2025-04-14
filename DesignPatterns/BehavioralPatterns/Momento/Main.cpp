#include<iostream>
#include "TextEditor.cpp"
#include "History.cpp"

using namespace std;

int main(){
    TextEditor editor;
    History history;
    editor.write("Hello, ");
    history.save(&editor);
    cout << "Current content: " << editor.getContent() << endl;
    editor.write("World!");
    history.save(&editor);
    cout << "Current content: " << editor.getContent() << endl;
    history.undo(&editor);
    cout << "After undo: " << editor.getContent() << endl;
    history.undo(&editor);
    cout << "After undo: " << editor.getContent() << endl;
    history.undo(&editor);

}