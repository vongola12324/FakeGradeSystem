/****************************************************
 *  Project Name: GradeSystem                       *
 *  Project Author: Vongola <vongola12324@coder.tw> *
 *  Project Version: 1.1                            *
 *  Project VCS URL: FakeGradeSystem @ GitHub       *
 *  Project License: GNU GPLv3                      *
 ****************************************************/

#include "include/Grade.h"

/* suspendStudent
 * Use    : Set Student suspend, and clean all score, credit, and course.
 * Need   : Student(list)
 * Return : None
 */
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
        it->suspend();
        cout << "Student " + it->getUID() + " is suspend!" << endl;
    }
    cout << endl;
    cout << "Press Enter to Continue......" ;
    cin.get();
    return;
}
