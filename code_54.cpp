#include<bits/stdc++.h>
using namespace std;

class tollBooth{
    private:
    unsigned int cars;
    double amt;

    public:
    tollBooth() : cars(0), amt(0.0){
        //
    }
    void payingCar(){
        cout << " Incrementing the car total and adds 0.50 to the cash total " << endl;
        cars++;
        amt += 0.50;
        cout << amt << endl;
    }
    void nopayCar(){
        cout << " Increments only the car total " << endl;
        cars++;
    }
    void display(){
        cout << " Total number of cars = " << cars << endl;
        cout << " Total amount = " << amt << endl;
    }
};

int main(){
    cout << " TOLL BOOTH " << endl;
    char ch;
    tollBooth n1;
    do{
        ch = getchar();
        if( ch == 'w'){
            n1.payingCar();
        }
        else if( ch == 's'){
            n1.nopayCar();
        }
    }while( ch != 'a' );

    n1.display();
  return 0;
}
