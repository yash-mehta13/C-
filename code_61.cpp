#include<bits/stdc++.h>
using namespace std;

class Fraction {
private:
    unsigned int num;
    unsigned int den;

public:
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

    // Function to add two fractions
    Fraction fadd(const Fraction& other) const {
        Fraction result;
        result.num = num * other.den + other.num * den;
        result.den = den * other.den;
        return result;
    }
    // Subtract
    Fraction fsub(const Fraction& other) const {
        Fraction result;
        result.num = num * other.den - other.num * den;
        result.den = den * other.den;
        return result;
    }
    // multiply
    Fraction fmul(const Fraction& other) const {
        Fraction result;
        result.num = num * other.num;
        result.den = den * other.den;
        return result;
    }
    // division
    Fraction fdiv(const Fraction& other) const {
        Fraction result;
        result.num = num * other.den;
        result.den = den * other.num;
        return result;
    }
};

int main(){
    Fraction number1, number2, sum, sub, mul, div;

    number1.getData();
    number1.lowterms();
    number1.display();
    number2.getData();
    number2.lowterms();
    number2.display();

    sum = number1.fadd(number2);
    sum.display();
    sub = number1.fsub(number2);
    sub.display();
    mul = number1.fmul(number2);
    mul.display();
    div = number1.fdiv(number2);
    div.display();
  return 0;
}
