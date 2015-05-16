#include "include/Grade.h"

void calcAverage(list<Student> &stu){
    for(list<Student>::iterator it = stu.begin(); it!= stu.end(); ++it){
        int TotCredits = 0, TotCoursePoints = 0;
        for(list<_Course>::iterator it2 = it->Course.begin(); it2!=it->Course.end(); ++it2){
            TotCredits += it2->getPoint();
            TotCoursePoints += it2->getScore();
        }
        it->setAvgData(TotCoursePoints, TotCredits);
    }
    return;
}
