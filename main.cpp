#include "include/Grade.h"

int main(){
    list<Student> stu;
    char act = '1';
    do{
        system("clear");
        cout << endl;
        cout << "FengYou Academy Grade System" << endl;
        cout << "Version 1.0" << endl;
        cout << "==================================" << endl;
        cout << "Menu: " << endl;
        cout << "  1) Load " << endl;
        cout << "  2) Group Insert " << endl;
        cout << "  3) Suspend " << endl;
        cout << "  4) Calculate Average " << endl;
        cout << "  5) Print Grade Report (All Active Student) " << endl;
        cout << "  6) Print Grade Report (Individual Only) " << endl;
        cout << "  7) Quit " << endl;
        cout << endl;
        cout << "Enter (1-7)>> ";
        act = getchar();
        // Clean Return
        scanf("%*c");
        switch (act) {
            case '1':
                loadStudent(stu);
                break;
            case '2':
                groupInsert(stu);
                break;
            case '3':
                suspendStudent(stu);
                break;
            case '4':
                calcAverage(stu);
                break;
            case '5':
                printAllData(stu);
                break;
            case '6':
                printSingleData(stu);
                break;
            case '7':
                cout << "Sure to Quit? [y/N]: ";
                act = getchar();
                scanf("%*c");
                if(act is 'y' or act is 'Y')
                    act = '7';
                else
                    act = '0';
                break;
            default:
                cout << "Error: Wrong Input, Press Enter to Continue." << endl;
                cin.get();
        }
    }while(act != '7');
    return 0;
}
