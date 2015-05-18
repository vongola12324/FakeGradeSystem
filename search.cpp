/****************************************************
 *  Project Name: GradeSystem                       *
 *  Project Author: Vongola <vongola12324@coder.tw> *
 *  Project Version: 1.1                            *
 *  Project VCS URL: FakeGradeSystem @ GitHub       *
 *  Project License: GNU GPLv3                      *
 ****************************************************/

#include "include/Grade.h"

/* findStudentByUID
 * Use    : Find the student in list by UID.
 * Need   : Student(list), UID(string)
 * Return : The iterator of selection Student.
 */
list<Student>::iterator findStudentByUID(list<Student> &stu, string UID){
    list<Student>::iterator it;
    for(it=stu.begin(); it!=stu.end(); ++it){
        if(it->getUID() == UID)
            break;
    }
    return it;
}

/* findCourseByCode
 * Use    : Find the course of the student in list by courseCode.
 * Need   : Course(list), Code(string)
 * Return : The iterator of selection Course.
 */
list<_Course>::iterator findCourseByCode(list<_Course> &Course, string Code){
    list<_Course>::iterator it;
    for(it=Course.begin(); it!=Course.end(); ++it){
        if(it->getCode() == Code)
            break;
    }
    return it;
}
