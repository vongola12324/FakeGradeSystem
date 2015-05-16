#include "include/Grade.h"

void groupInsert(list<Student> &stu){
    // Open File
    string filename = "";
    ifstream fin;
    do{
        cout << "Enter Filename: ";
        getline(cin, filename);
        fin.open(filename);
        if(!fin){
            cout << "Error: Can\'t open file! (Wrong filename?)" << endl;
            cout << "Press Enter to Continue." << endl;
            scanf("%*c");
        }
    }while(!fin);
    if(filename.find(".txt")!=string::npos)
        filename = filename.substr(0, filename.length()-4);

    // Get Data
    string UID;
    int Score;
    int Point;
    cout << "Enter CourseCredit for " + filename + " : ";
    cin >> Point;
    while(fin >> UID >> Score){
        list<Student>::iterator it = findStudentByUID(stu, UID);
        if(it!=stu.end()){
            list<_Course>::iterator it2 = findCourseByCode(it->Course, filename);
            if(it2==it->Course.end()){
                _Course newCourse(filename);
                newCourse.setCourse(filename, Score, Point);
                it->Course.push_back(newCourse);
            }
            else{
                it2->setCourse(filename, Score, Point);
            }
        }
        else{
            cout << "Student ID: " + UID + " not found!" << endl;
        }
    }

    fin.close();
    return;
}
