#ifndef TEXTEDITOR_CPP
#define TEXTEDITOR_CPP

#include<iostream>
#include "EditorMomento.cpp"
using namespace std;

class TextEditor{
   private:
      string text;
   public:
   void write(string str){
    if (!text.empty()) {
        text += ' ';
    }
    text += str;
   }
   string getContent(){
       return text;
   }
   EditorMomento save() const;
   void restore(const EditorMomento& momento);
};

EditorMomento TextEditor::save() const {
    return EditorMomento(text);
}

void TextEditor::restore(const EditorMomento& momento) {
    text = momento.getContent();
}

#endif