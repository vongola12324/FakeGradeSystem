#include "include/Grade.h"

void groupInsert(list<Student> &stu){
    showHint(2);
    // Open File
    string filename = "";
    ifstream fin;
    do{
        cout << "Enter Filename: ";
        getline(cin, filename);
        fin.open(filename);
        if(!fin){
            cout << "Error: Can\'t open file! (Wrong filename?)" << endl;
            cout << "Press Enter to Continue......" ;
            cin.get();
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
    cin.get();
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
    cout << "Insert Course \"" + filename + "\" Finished!!" << endl;
    cout << "Press Enter to Continue......" ;
    cin.get();
    fin.close();
    return;
}
