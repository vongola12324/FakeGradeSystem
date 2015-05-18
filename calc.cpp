/****************************************************
 *  Project Name: GradeSystem                       *
 *  Project Author: Vongola <vongola12324@coder.tw> *
 *  Project Version: 1.1                            *
 *  Project VCS URL: FakeGradeSystem @ GitHub       *
 *  Project License: GNU GPLv3                      *
 ****************************************************/

#include "include/Grade.h"

/* calcAverage
 * Use    : Calculate each Student's CoursePoints, CourseCredit, and Average..
 * Need   : Student(list)
 * Return : None
 */
void calcAverage(list<Student> &stu){
    showHint(4);
    cout << "Calculating......" << endl;
    for(list<Student>::iterator it = stu.begin(); it!= stu.end(); ++it){
        int TotCredits = 0, TotCoursePoints = 0;
        for(list<_Course>::iterator it2 = it->Course.begin(); it2!=it->Course.end(); ++it2){
            TotCredits += it2->getPoint();
            TotCoursePoints += it2->getScore() * it2->getPoint();
        }
        it->setAvgData(TotCoursePoints, TotCredits);
        cout << "  - Student ID: " + it->getUID() + " Calculated." << endl;
    }
    cout << "Press Enter to Continue......" ;
    cin.get();
    return;
}
