#include "include/Grade.h"

list<Student>::iterator findStudentByUID(list<Student> &stu, string ID){
    list<Student>::iterator it;
    for(it=stu.begin(); it!=stu.end(); ++it){
        if(it->getUID() == ID)
            break;
    }
    return it;
}
