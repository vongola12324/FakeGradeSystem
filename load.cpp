#include "include/Grade.h"

void loadStudent(list<Student> &stu){
    system("clear");
    string filename = "", ID="", Name="";
    ifstream fin;
    do{
        cout << "Enter Filename: ";
        cin >> filename;
        fin.open(filename);
        if(!fin){
            cout << "Error: Can\'t open file! (Wrong filename?)" << endl;
            cout << "Press Enter to Continue." << endl;
            scanf("%*c");
        }
    }while(!fin);
    while(fin >> ID >> Name){
        Student newStu;
        newStu.setIDandName(ID, Name);
        stu.push_back(newStu);
    }
    fin.close();
    return;
}
