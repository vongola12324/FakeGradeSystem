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
        cout << "  1) Initial " << endl;
        cout << "  2) Load " << endl;
        cout << "  3) Group Insert " << endl;
        cout << "  4) Suspend " << endl;
        cout << "  5) Calculate Average " << endl;
        cout << "  6) Print Grade Report (All Active Student) " << endl;
        cout << "  7) Print Grade Report (Individual Only) " << endl;
        cout << "  8) Quit " << endl;
        cout << endl;
        cout << "Enter (1-8)>> ";
        act = getchar();
        // Clean Return
        scanf("%*c");
        switch (act) {
            case '1':
                break;
            case '2':
                loadStudent(stu);
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '6':
                break;
            case '7':
                break;
            case '8':
                cout << "Sure to Quit? [y/N]: ";
                act = getchar();
                scanf("%*c");
                if(act is 'y' or act is 'Y')
                    act = '8';
                else
                    act = '0';
                break;
            default:
                cout << "Error: Wrong Input, Press Enter to Continue." << endl;
                getchar();
        }
    }while(act != '8');
    return 0;
}
