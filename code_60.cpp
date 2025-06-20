#include <iostream>
using namespace std;

class Fraction {
private:
    unsigned int numerator;
    unsigned int denominator;

public:
    Fraction() : numerator(0), denominator(1) {
        //
    }

    void getData() {
        cout << "Enter fraction (numerator/denominator): ";
        cin >> numerator;
        cout << "/";
        cin >> denominator;
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }

    // Function to add two fractions
    Fraction add(const Fraction& other) const {
        Fraction result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }
};

int main() {
    char ch;
    do {
        Fraction num1, num2, sum;
        num1.getData();
        num2.getData();

        sum = num1.add(num2);

        cout << "Sum: ";
        sum.display();

        cout << "Do you want to continue (y/n)? ";
        cin >> ch;

    } while (ch != 'n' && ch != 'N');

    return 0;
}
