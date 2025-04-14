#ifndef HISTORY_CPP
#define HISTORY_CPP

#include<iostream>
#include<stack>
#include "TextEditor.cpp"
#include "EditorMomento.cpp"
using namespace std;

class History {
    private:
        stack<EditorMomento> historyStack;
        stack<EditorMomento> redoStack;
        public:
        void save(TextEditor* editor){
            historyStack.push(editor->save());
            while(!redoStack.empty()){
                redoStack.pop();
            }   
        }
        void undo(TextEditor* editor){
            if(!historyStack.empty()){
                redoStack.push(historyStack.top());
                historyStack.pop();
                cout<<"Undoing last action..."<<endl;
                if(historyStack.empty()) {editor->restore(EditorMomento(" ")); return;}
                EditorMomento lastAction = historyStack.top();
                editor->restore(lastAction);
            } else {
                cout << "No more actions to undo." << endl;
            }
        }

        void redo(TextEditor* editor){
            if(!redoStack.empty()){
                historyStack.push(redoStack.top());
                redoStack.pop();
                editor->restore(historyStack.top());
            }
            else {
                cout << "No more actions to redo." << endl;
            }
        }
};

#endif