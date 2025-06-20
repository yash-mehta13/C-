#include<bits/stdc++.h>
using namespace std;

class employee{
    private:
    int employeenumber;
    float compensation;

    public:
    employee(){
        // no arguments
    }
    employee(int emp, float comp) : employeenumber(emp), compensation(comp){
        // two arguments
    }
    void member(){
        cout << " Employee's Number : "; cin >> employeenumber;
        cout << " Employee's  Compensation : "; cin >> compensation;
    }
    void display(){
        cout << employeenumber << endl;
        cout << compensation << endl;
    }
};

int main(){
    employee e1, e2, e3;

    e1.member();
    e1.display();
    e2.member();
    e2.display();
    e3.member();
    e3.display();

  return 0;
}
