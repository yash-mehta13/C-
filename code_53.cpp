#include<bits/stdc++.h>
using namespace std;

class Int{
    private:
    int i;

    public:
    Int(){
        i = 0;
    }
    Int(int ii){
        i = ii;
    }
    void addint(Int i2, Int i3){
        i = i2.i + i3.i;
    }
    void display(){
        cout << i;
    }
};

int main(){
    Int Int1(7);
    Int Int2(11);
    Int Int3;

    Int3.addint(Int1, Int2);
    cout << " Int3 = "; Int3.display();
  return 0;
}
