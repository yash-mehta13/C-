#include<bits/stdc++.h>
using namespace std;

class Distance{
  private:
  int feet;
  int inches;

  public:
  Distance(): feet(0), inches(0.0){       //constructor no args

  }
  Distance(int ft, float in): feet(ft), inches(in){        //constructor with two args

  }
  void getdist(){
    cout << " Enter feet : "; cin >> feet;
    cout << " Enter inches : "; cin >> inches;
  }
  void showdist(){
    cout << feet << '\"' << inches << '\"';
  }
  void add_dist( Distance, Distance);        // declaration
};

void Distance::add_dist(Distance d2, Distance d3){
  inches = d2.inches + d3.inches;
  feet = 0;
  if(inches >= 12.0){
    inches -= 12.0;
    feet++;
  }
  feet += d2.feet + d3.feet;
}

int main(){
  Distance dist1, dist3;
  Distance dist2(11, 6.25);

  dist1.getdist();
  dist3.add_dist(dist1, dist2);

  cout << " dist1 = "; dist1.showdist();
  cout << " dist2 = "; dist2.showdist();
  cout << " dist3 = "; dist3.showdist();
  cout << endl;
  return 0;
}
