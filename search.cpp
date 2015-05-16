#include "include/Grade.h"

list<Student>::iterator findStudentByUID(list<Student> &stu, string ID){
    list<Student>::iterator it;
    for(it=stu.begin(); it!=stu.end(); ++it){
        if(it->getUID() == ID)
            break;
    }
    return it;
}

list<_Course>::iterator findCourseByCode(list<_Course> &Course, string Code){
    list<_Course>::iterator it;
    for(it=Course.begin(); it!=Course.end(); ++it){
        if(it->getCode() == Code)
            break;
    }
    return it;
}
