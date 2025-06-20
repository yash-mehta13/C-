#include<bits/stdc++.h>
using namespace std;

class angle{
    private:
    int degrees;
    float minutes;
    char direction;

    public:
    angle(){
        // no arguments
    }
    angle(int dgr, float min, char dir) : degrees(dgr), minutes(min), direction(dir){
        // initialization
    }
    void measure(){
        cout << " Enter the degrees : "; cin >> degrees;
        cout << " Enter the minutes : "; cin >> minutes;
        cout << " Enter the direction : "; cin >> direction;
    }
    void display(){
        cout << degrees << '\xF8' << minutes << "' " << direction << endl;
    }
};

int main(){
    angle a1(55,23,'N');
    angle a2;
    a1.display();

    a2.measure();
    a2.display();
  return 0;
}
