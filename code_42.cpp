#include<bits/stdc++.h>
using namespace std;

int hms_to_secs(int, int, int);

int main(){
    int hrs, min, sec;

    cout << " Enter hours = "; cin >> hrs; cout << endl;
    cout << " Enter minutes = "; cin >> min; cout << endl;
    cout << " Enter seconds = "; cin >> sec; cout << endl;
    cout << hrs << ":" << min << ":" << sec << endl;
    cout << hms_to_secs(hrs,min,sec);

  return 0;
}

int hms_to_secs(int hours, int minutes, int seconds){
    long second;
    second = hours*3600 + minutes*60 + seconds;
    cout << " Total Seconds = ";
    return second;

}