#ifndef GRADE_H
#define GRADE_H

// Include file
#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include "struct.h"
#include "define.h"

// Namespace
using namespace std;

// Function declare
// Load
void loadStudent(list<Student> &stu);
// Suspend
void suspendStudent(list<Student> &stu);
// Insert
void groupInsert(list<Student> &stu);
// Calc
void calcAverage(list<Student> &stu);
// Search
list<Student>::iterator findStudentByUID(list<Student> &stu, string ID);
list<_Course>::iterator findCourseByCode(list<_Course> &Course, string Code);
// Print
void printAllData(list<Student> &stu);
void printSingleData(list<Student> &stu);
void showHint(int mode);

#endif
