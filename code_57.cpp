#include<bits/stdc++.h>
using namespace std;

class date{
    private:
    int day;
    int month;
    int year;
    
    public:
    void getdate(){
        cout << " Enter the date = "; cin >> day;
        cout << " Enter the month = "; cin >> month;
        cout << " Enter the year = "; cin >> year;
    }
    void showdate(){
        cout << day << "/" << month << "/" << year << endl;
    }
};
int main(){
    date d1;

    d1.getdate();
    d1.showdate();
  return 0;
}
