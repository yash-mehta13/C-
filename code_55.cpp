#include<bits/stdc++.h>
using namespace std;

class timerr{
    private:
    int hours;
    int minutes;
    int seconds;

    public:
    timerr() : hours(0), minutes(0), seconds(0){
        // constructor with no initialization
    }
    timerr(int hrs, int min, int sec) : hours(hrs), minutes(min), seconds(sec){
        // constructor with initialization
    }
    void display(){
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    void addobj(timerr t1, timerr t2){
        seconds = t1.seconds + t2.seconds;
        if( seconds >= 60){
            seconds -= 60;
            minutes++;
        }
        minutes = t1.minutes + t2.minutes;
        if( minutes >= 60){
            minutes -= 60;
            hours++;
        }
        hours = t1.hours + t2.hours;

        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main(){
    const timerr time1(4,57,17);
    const timerr time2(14,26,35);
    timerr time3;

    time3.addobj(time1, time2);
    time3.display();
    cout << endl;

  return 0;
}
