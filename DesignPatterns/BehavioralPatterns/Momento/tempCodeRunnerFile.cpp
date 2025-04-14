  history.undo(&editor);
    cout << "After undo: " << editor.getContent() << endl;
    history.undo(&editor);
    cout << "After undo: " << editor.getContent() << endl;