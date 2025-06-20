#include<bits/stdc++.h>
using namespace std;

struct point
{
    int xaxis;
    int yaxis;
};

int main(){
    point point1;
    point point2;
    point point3;

    cout << " Enter the coordinates for p1 : ";
    cin >> point1.xaxis >> point1.yaxis;
    cout << " Enter the coordinates for p2 : ";
    cin >> point2.xaxis >> point2.yaxis;

    point3.xaxis = point1.xaxis + point2.xaxis;
    point3.yaxis = point1.yaxis + point2.yaxis;
    cout << " Coordinates of p1 + p2 are : " << point3.xaxis << " , " << point3.yaxis << endl;
  return 0;
}
