#include<bits/stdc++.h>
using namespace std;

class Fraction {

public:
    unsigned int num;
    unsigned int den;
    Fraction() : num(0), den(1) {
        //
    }

    void getData() {
        cout << "Enter fraction (num/den): "; cin >> num; 
        cout << "/"; cin >> den;
    }

    void display() const {
        cout << num << "/" << den << endl;
    }

    void lowterms(){  // change ourself to lowest terms
    long tnum, tden, temp, gcd;

    tnum = labs(num);      // use non-negative copies
    tden = labs(den);      // (needs cmath)
    if(tden == 0)          // check for n/0
    {
        cout << "Illegal fraction: division by 0"; exit(1);
    }
    else if(tnum == 0)     // check for 0/n
    {
        num = 0; den = 1; return;
    }

    // this 'while' loop finds the gcd of tnum and tden
    while(tnum != 0)
    {
        if(tnum < tden)        // ensure numerator larger
        {
            temp = tnum; tnum = tden; tden = temp;  // swap them
        }
        tnum = tnum - tden;    // subtract them
    }
    gcd = tden;                // this is greatest common divisor
    num = num / gcd;           // divide both num and den by gcd
    den = den / gcd;           // to reduce frac to lowest terms
    }

    // multiply
    Fraction fmul(const Fraction& other) const {
        Fraction result;
        result.num = num * other.num;
        result.den = den * other.den;
        return result;
    }
};

int main(){
    Fraction num1, num2, num3;

    num1.getData();
    //num1.lowterms();
    num1.display();
    num2.getData();
    //num2.lowterms();
    num2.display();

    for( num1.num = 1; num1.num < num1.den; num1.num++){
        for( num2.num = 1; num2.num < num2.den; num2.num++){
            num3.num = num1.num*num2.num;
            num3.den = num1.den*num2.den;
            //num3.lowterms();
            num3.lowterms();
            cout << setw(6) << num3.num << "/" << num3.den << " ";
        }
        cout << endl;
    }
  return 0;
}
