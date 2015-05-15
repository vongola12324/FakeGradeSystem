struct Student{
    bool ActFlag;
    string StudentID;
    string StduentName;
    int TotCoursePoints;
    int TotCredits;
    double Average;

    Student(){
        this->ActFlag = true
        this->StudentID = "D9999999"
        this->StudentName = "xxxxxxxxxxxxxxxxxxxx"
        this->TotCoursePoints = 0;
        this->TotCredits = 0;
        this->Average = 0.00;
    }
}

struct Course{
    struct Course *nextCourse;
    string CourseCode;
    int Score;

    Course(string CourseCode){
        this->CourseCode = CourseCode;
        this->Score = 0
    }

    loadCourse(string CourseCode, int Score){
        this->CourseCode = CourseCode;
        this->Score = Score;
    }
}
