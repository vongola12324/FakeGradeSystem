/****************************************************
 *  Project Name: GradeSystem                       *
 *  Project Author: Vongola <vongola12324@coder.tw> *
 *  Project Version: 1.1                            *
 *  Project VCS URL: FakeGradeSystem @ GitHub       *
 *  Project License: GNU GPLv3                      *
 ****************************************************/

#include "include/Grade.h"

/* suspendStudent
 * Use    : Load Students' data from file.
 * Need   : Student(list)
 * Return : None
 */
void loadStudent(list<Student> &stu){
    showHint(1);
    string filename = "", ID="", Name="";
    ifstream fin;
    do{
        cout << "Enter Filename: ";
        getline(cin, filename);
        fin.open(filename);
        if(!fin){
            cout << "Error: Can\'t open file! (Wrong filename?)" << endl;
        }
    }while(!fin);
    while(fin >> ID >> Name){
        list<Student>::iterator it = findStudentByUID(stu, ID);
        if(it==stu.end()){
            Student newStu;
            newStu.setIDandName(ID, Name);
            stu.push_back(newStu);
        }
        else{
            cout << "Warning: Find same student in list, ignore......." << endl;
        }
    }
    cout << "Load file \"" + filename + "\" Success!!" << endl;
    cout << "Press Enter to Continue......" ;
    cin.get();
    fin.close();
    return;
}
