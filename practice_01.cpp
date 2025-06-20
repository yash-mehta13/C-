#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int year1 = 1990, year2 = 1991, year3 = 1992, year4 = 1993;
    int num1= 135, num2 = 7290, num3 = 11300, num4 = 16200;

    cout << setw(8) << " YEAR " << setw(8) << "NUMBERS" << endl
         << setw(8) << year1 << setw(8) << num1 << endl 
         << setw(8) << year2 << setw(8) << num2 << endl 
         << setw(8) << year3 << setw(8) << num3 << endl 
         << setw(8) << year4 << setw(8) << num4 << endl;
    return 0;
}