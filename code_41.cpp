#include<bits/stdc++.h>
using namespace std;

struct Distance{
    int feet;
    float inch;
};

Distance len(Distance, Distance);
void calc(Distance);

int main(){
    Distance d1;
    Distance d2;
    Distance d3;

    cout << " Enter feet d1 : ";
    cin >> d1.feet;
    cout << " Enter inches d1 : ";
    cin >> d1.inch;
    calc(d1);

    cout << " Enter feet d2 : ";
    cin >> d2.feet;
    cout << " Enter inches d2 : ";
    cin >> d2.inch;
    calc(d2);

    d3 = len(d1,d2);
    cout << " Largest is " << calc(d3) << endl;

  return 0;
}

Distance len(Distance d1, Distance d2){
    // Converting d1 and d2 in inches
    float dd1 = d1.feet + d1.inch*12;
    float dd2 = d2.feet + d2.inch*12;
    
    //Choosing the larger length
    if( dd1 > dd2){
        cout << " d1 is greater than d2 " << dd1 << endl;
    }
    else if( dd2 > dd1){
        cout << " d2 is greater than d1 " << dd2 << endl;
    }
    else{
        cout << " Both are of equal lengths " << endl;
    }
}

void calc(Distance dd){
    cout << dd.feet << "-" << dd.inch << endl;
}