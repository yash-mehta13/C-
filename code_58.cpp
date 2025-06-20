#include<bits/stdc++.h>
using namespace std;

enum etype { laborer, secratary, manager, accountant, executive, researcher };
const char lab = 'l';
const char sec = 's';
const char man = 'm';
const char acc = 'a';
const char exe = 'e';
const char res = 'r';

class date{
    public:
    int day;
    int month;
    int year;
    void getdate(){
        cout << " Enter the date = "; cin >> day;
        cout << " Enter the month = "; cin >> month;
        cout << " Enter the year = "; cin >> year;
    }
    void showdate(){
        cout << day << "/" << month << "/" << year << endl;
    }
};

class employee{
    private:
    int employeenumber;
    float compensation;

    public:
    employee(){
        // no arguments
    }
    employee(int emp, float comp) : employeenumber(emp), compensation(comp){
        // two arguments
    }
    void employeemember(){
        cout << " Employee's Number : "; cin >> employeenumber;
        cout << " Employee's  Compensation : "; cin >> compensation;
    }
    void display(){
        cout << employeenumber << endl;
        cout << compensation << endl;
    }
    date employeedate(){
        date emp1;
        emp1.getdate();
        emp1.showdate();
        return{};
    }
    etype employeetype(){
        char ch;
        cin >> ch;
        switch(ch){
            case 'l':
            cout << " Employee Type is Laborer " << endl;
            break;
            case 's':
            cout << " Employee Type is Secratary " << endl;
            break;
            case 'm':
            cout << " Employee Type is Manager " << endl;
            break;
            case 'a':
            cout << " Employee Type is Accountant " << endl;
            break;
            case 'e':
            cout << " Employee Type is Executive " << endl;
            break;
            case 'r':
            cout << " Employee Type is Researcher " << endl;
            break;

            default:
            cout << " NOTHING " << endl;
            break;
        }
        return{};
    }
};

int main(){
    employee e1;

    e1.employeemember();
    e1.display();
    e1.employeedate();
    e1.employeetype();
    cout << endl;
  return 0;
}
