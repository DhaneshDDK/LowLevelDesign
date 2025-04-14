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
        public:
        void save(TextEditor* editor){
            historyStack.push(editor->save());
        }
        void undo(TextEditor* editor){
            if(!historyStack.empty()){
                historyStack.pop();
                cout<<"Undoing last action..."<<endl;
                if(historyStack.empty()) {editor->restore(EditorMomento(" ")); return;}
                EditorMomento lastAction = historyStack.top();
                editor->restore(lastAction);
            } else {
                cout << "No more actions to undo." << endl;
            }
        }
};

#endif