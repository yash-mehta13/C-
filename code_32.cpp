#include<bits/stdc++.h>
using namespace std;

struct Distance{
    float feet;
    float inches;
};

struct Volume{
    Distance length;
    Distance width;
    Distance height;
};

int main(){
    Volume volume1;
    double totalvolume;

    cout << " Enter the length of the room = ";
    cin >> volume1.length.feet >> volume1.length.inches;
    cout << " Enter the width of the room = ";
    cin >> volume1.width.feet >> volume1.width.inches;
    cout << " Enter the height of the room = ";
    cin >> volume1.height.feet >> volume1.height.inches;
    cout << endl;

    totalvolume = (volume1.length.feet + (volume1.length.inches)/12)*(volume1.width.feet + (volume1.width.inches)/12)*(volume1.height.feet + (volume1.height.inches)/12);
    cout << " Total Volume = " << totalvolume << endl;
  return 0;
}
