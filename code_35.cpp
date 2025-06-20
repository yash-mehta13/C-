#include<bits/stdc++.h>
using namespace std;

struct samay
{
    int hours;
    int minutes;
    int seconds;
};

int main(){
    samay time_01;

    cout << " Enter Hours : ";
    cin >> time_01.hours;
    cout << " Enter Minutes : ";
    cin >> time_01.minutes;
    cout << " Enter Seconds : ";
    cin >> time_01.seconds;

    cout << " Current Time is " << time_01.hours << ":" << time_01.minutes << ":" << time_01.seconds << endl;
    // Converting or printing total time in seconds
    int totaltime = time_01.hours*3600 + time_01.minutes*60 + time_01.seconds;
    cout << " Total Time in seconds is " << totaltime << endl;
  return 0;
}
