#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << " Type 1 to convert Fahrenheit to Celsius " << endl;
    cout << " Type 2 to convert Celsius to Fahrenheit " << endl;
    unsigned long Fahrenheit;
    unsigned long Celsius;
    int type;
    cout << " Enter Type : " << endl; 
    cin >> type;

    if( type == 1){
        cout << " Enter Fahrenheit : ";
        cin >> Fahrenheit;
        cout << " Converting Fahrenheit to Celsius : " << (Fahrenheit - 32)*(5/9) << endl;
    }
    else if( type == 2){
        cout << " Enter Celsius : ";
        cin >> Celsius;
        cout << " Converting Celsius to Fahrenheit : " << (Celsius + 32)*(9/5) << endl;
    }
  return 0;
}
