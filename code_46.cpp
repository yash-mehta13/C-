#include<bits/stdc++.h>
using namespace std;

struct timer{
    int hrs;
    int min;
    int sec;
};

int swap(int, int);

int main(){
    timer t1,t2;
    
    cout << " Enter time for t1 : " << endl;
    cin >> t1.hrs >> t1.min >> t1.sec;
    cout << " Time 1 = " << t1.hrs << ":" << t1.min << ":" << t1.sec << endl;

    cout << " Enter time for t2 : " << endl;
    cin >> t2.hrs >> t2.min >> t2.sec;
    cout << " Time 2 = " << t2.hrs << ":" << t2.min << ":" << t2.sec << endl;

    cout << swap(t1.hrs, t2.hrs) << endl;
    cout << swap(t1.min, t2.min) << endl;
    cout << swap(t1.sec, t2.sec) << endl;
    
    cout << " Time 1 = " << t1.hrs << ":" << t1.min << ":" << t1.sec << endl;
    cout << " Time 2 = " << t2.hrs << ":" << t2.min << ":" << t2.sec << endl;
  return 0;
}

int swap(int n, int e){
    int temp;
    temp = n;
    n = e;
    e = temp;

    cout <<  n << endl;
    return e;
}