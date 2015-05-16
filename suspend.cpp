#include "include/Grade.h"

void suspendStudent(list<Student> &stu){
    list<Student>::iterator it;
    string UID = "";
    cout << "Enter Student ID: ";
    cin >> UID;
    it = findStudentByUID(stu, UID);
    if(it == stu.end()){
        cout << "Student Not Found!";
    }
    else{
        it->ActFlag = false;
        cout << "Student " + it->getUID() + " is suspend!" << endl;
    }
    cout << "Press Enter to Continue......";
    scanf("%*s");
    return;
}
