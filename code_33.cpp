#include<bits/stdc++.h>
using namespace std;

enum etype{ laborer, secratary, manager, accountant, executive, researcher };

struct  date{
    int day;
    int month;
    int year;
};

struct employee{
    int number;
    int compensation;
};
char dir;
dir = _getwche();
int main(){
    employee person1, person2, person3;
    date person01, person02, person03;

    cout << " Enter the employee's number : ";
    cin >> person1.number;
    cout << " Enter the employee's compensation : ";
    cin >> person1.compensation;
    cout << " Enter the date : ";
    cin >> person01.day >> person01.month >> person03.year;
    cout << " Date : " << person01.day << "/"  << person01.month << "/" << person01.year;

    cout << " Enter the employee's number : ";
    cin >> person2.number;
    cout << " Enter the employee's compensation : ";
    cin >> person2.compensation;
    cout << " Enter the date : ";
    cin >> person02.day >> person02.month >> person02.year;
    cout << " Date : " << person02.day << "/"  << person02.month << "/" << person02.year;

    cout << " Enter the employee's number : ";
    cin >> person3.number;
    cout << " Enter the employee's compensation : ";
    cin >> person3.compensation;
    cout << " Enter the date : ";
    cin >> person03.day >> person03.month >> person03.year;
    cout << " Date : " << person03.day << "/" << person03.month << "/" << person03.year;

    int i;
    cin >> i;
    switch(i){
        switch (dir){
        case 'l':
        cout << " Laborer " << endl;
        break;
        case 's':
        cout << " secratary " << endl;
        break;
        case 'm':
        cout << " manager " << endl;
        break;
        case 'a':
        cout << " accountant " << endl;
        break;
        case 'e':
        cout << " executive " << endl;
        break;
        case 'r':
        cout << " researcher " << endl;
        break;
        
        default:
        cout << " NO " << endl;
        break;
        }
    }

  return 0;
}
