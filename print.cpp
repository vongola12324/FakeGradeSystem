/****************************************************
 *  Project Name: GradeSystem                       *
 *  Project Author: Vongola <vongola12324@coder.tw> *
 *  Project Version: 1.1                            *
 *  Project VCS URL: FakeGradeSystem @ GitHub       *
 *  Project License: GNU GPLv3                      *
 ****************************************************/

#include "include/Grade.h"

/* printAllData
 * Use    : Print All Students' Data in Student list.
 * Need   : Student(list)
 * Return : None
 */
void printAllData(list<Student> &stu){
    showHint(5);
    for ( Student it: stu ){
        if( it.getActFlag() ){
            cout << "---------------------------------------------------" << endl;
            cout << "  Name            : " << it.getName() << endl;
            cout << "  ID              : " << it.getUID() << endl;
            cout << "  Active          : " << (it.getActFlag() ? "Yes" : "No") << endl;
            cout << "  TotCoursePoints : " << it.getTotCoursePoints() << endl;
            cout << "  TotCredits      : " << it.getTotCredits() << endl;
            cout << "  Average         : " << it.getAverage() << endl;
            if(!(it.Course.empty())){
                cout << "  Course          : "<< endl;
                for(_Course it2: it.Course){
                    cout << "    - " << it2.getCode() << " : " << it2.getScore() << " pt/ " << it2.getPoint() << " pt" << endl;
                }
            }
        }

    }
    cout << "---------------------------------------------------" << endl;
    cout << "Press Enter to Continue......" ;
    cin.get();
    return;
}

/* printSingleData
 * Use    : Print Single Student's Data in Student list.
 * Need   : Student(list)
 * Return : None
 */
void printSingleData(list<Student> &stu){
    showHint(6);
    string UID;
    cout << "Enter Student ID: ";
    cin >> UID;
    cin.get();
    list<Student>::iterator it = findStudentByUID(stu, UID);
    if(it!=stu.end()){
        cout << "Here is the Data of " << UID << " : " << endl;
        cout << "  Name            : " << it->getName() << endl;
        cout << "  ID              : " << it->getUID() << endl;
        cout << "  Active          : " << (it->getActFlag() ? "Yes" : "No") << endl;
        cout << "  TotCoursePoints : " << it->getTotCoursePoints() << endl;
        cout << "  TotCredits      : " << it->getTotCredits() << endl;
        cout << "  Average         : " << it->getAverage() << endl;
        if(!(it->Course.empty())){
            cout << "  Course          : "<< endl;
            for(_Course it2: it->Course){
                cout << "    - " << it2.getCode() << " : " << it2.getScore() << " pt/ " << it2.getPoint() << " pt" << endl;
            }
        }
    }
    else{
        cout << "Error: Student ID: " + UID + " not found!"  << endl;
    }
    cout << endl;
    cout << "Press Enter to Continue......" ;
    cin.get();
    return;
}

/* printAllData
 * Use    : Show Hint on the top of each feature.
 * Need   : mode (const int)
 * Return : None
 */
void showHint(const int mode){
    system("clear");
    cout << endl;
    cout << "FengYou Academy Grade System" << endl;
    cout << "Version 1.0" << endl;
    cout << "==================================" << endl;
    switch(mode){
        case 1:
            cout << "Load : load student data from file." << endl;
            cout << endl;
            break;
        case 2:
            cout << "GroupInsert : load student's course data from file." << endl;
            cout << "              (include UID and score)" << endl;
            cout << endl;
            break;
        case 3:
            cout << "Suspend : change student's ActFlag to \"False\"(leave school)." << endl;
            cout << endl;
            break;
        case 4:
            cout << "Calculate Average : Use the data in list to calc average." << endl;
            cout << endl;
            break;
        case 5:
            cout << "Print (All Data) : Print All Student in list(Which is not leave school)." << endl;
            cout << endl;
            break;
        case 6:
            cout << "Print (Individual Only) : Print Single Student Data." << endl;
            cout << endl;
            break;
    }
    return;
}
