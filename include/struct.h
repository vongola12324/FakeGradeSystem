using namespace std;

struct _Course{
    string CourseCode;
    int Score;

    _Course(string CourseCode){
        this->CourseCode = CourseCode;
        this->Score = 0;
    }

    void loadCourse(string CourseCode, int Score){
        this->CourseCode = CourseCode;
        this->Score = Score;
    }
};

struct Student{
    bool ActFlag;
    string StudentID;
    string StudentName;
    int TotCoursePoints;
    int TotCredits;
    double Average;
    list<_Course> Course;

    Student(){
        this->ActFlag = true;
        this->StudentID = "D9999999";
        this->StudentName = "xxxxxxxxxxxxxxxxxxxx";
        this->TotCoursePoints = 0;
        this->TotCredits = 0;
        this->Average = 0.00;
    }

    void setIDandName(string ID, string Name){
        this->StudentID = ID;
        this->StudentName = Name;
        this->ActFlag = true;
    }

    void printData(){
        cout << "Name: " << this->StudentName << endl;
        cout << "ID  : " << this->StudentID << endl;
    }
};
