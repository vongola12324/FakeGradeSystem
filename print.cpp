#include "include/Grade.h"

void printData(list<Student> &stu){
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
    return;
}

void printData(list<Student> &stu, string UID){
    list<Student>::iterator it = findStudentByUID(stu, UID);
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
    return;
}
