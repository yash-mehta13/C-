#include<bits/stdc++.h>
using namespace std;

float circarea(float r){
  float area;
  float pi = 3.14;
  area = pi*r*r;
  return area;
}

int main(){
  float r;
  cout << " Enter the radius : ";
  cin >> r;
  cout << "Area of the circle : " << circarea(r);
  return 0;
}
