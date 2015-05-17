#include "include/Grade.h"

void loadStudent(list<Student> &stu){
    system("clear");
    string filename = "", ID="", Name="";
    ifstream fin;
    do{
        cout << "Enter Filename: ";
        cin >> filename;
        cin.get();
        fin.open(filename);
        if(!fin){
            cout << "Error: Can\'t open file! (Wrong filename?)" << endl;
        }
    }while(!fin);
    while(fin >> ID >> Name){
        Student newStu;
        newStu.setIDandName(ID, Name);
        stu.push_back(newStu);
    }
    cout << "Load file \"" + filename + "\" Success!!" << endl;
    cout << "Press Enter to Continue......" ;
    cin.get();
    fin.close();
    return;
}
