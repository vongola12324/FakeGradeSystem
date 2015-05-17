#include "include/Grade.h"

void suspendStudent(list<Student> &stu){
    showHint(3);
    list<Student>::iterator it;
    string UID = "";
    cout << "Enter Student ID: ";
    cin >> UID;
    cin.get();
    it = findStudentByUID(stu, UID);
    if(it == stu.end()){
        cout << "Student Not Found!" << endl;
    }
    else{
        it->ActFlag = false;
        cout << "Student " + it->getUID() + " is suspend!" << endl;
    }
    cout << endl;
    cout << "Press Enter to Continue......" ;
    cin.get();
    return;
}
