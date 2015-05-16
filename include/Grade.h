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
void loadStudent(list<Student> &stu);
void suspendStudent(list<Student> &stu);
void calcAverage(list<Student> &stu);
list<Student>::iterator findStudentByUID(list<Student> &stu, string ID);

#endif
