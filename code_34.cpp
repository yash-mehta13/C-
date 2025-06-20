#include<bits/stdc++.h>
using namespace std;

struct fraction{
    int num;
    int den;
};
int main(){
    fraction number1, number2;

    cout << " Enter the 1st number : ";
    cin >> number1.num >> number1.den;
    cout << " Number is " << number1.num << "/" << number1.den << endl;
    cout << " Enter the 2nd number : ";
    cin >> number2.num >> number2.den;
    cout << " Number is " << number2.num << "/" << number2.den << endl;

    int numerator = number1.num*number2.den + number1.den*number2.num;
    int denominator = number1.den*number2.den;

    cout << " After addition of the 2 numbers, the result is " << numerator << "/" << denominator << endl;
  return 0;
}
