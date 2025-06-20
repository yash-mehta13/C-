#include<bits/stdc++.h>
using namespace std;

struct phone
{
    long areacode;
    long exchange;
    long number;
};

int main(){
    phone phone1;
    phone phone2;

    phone1.areacode = 415;
    phone1.exchange = 555;
    phone1.number = 1212;

    cout << " Enter your area code, exchange and number : " << phone1.areacode << " " << phone1.exchange << " " << phone1.number << endl;
    cin >> phone2.areacode >> phone2.exchange >> phone2.number;
    cout << " My number is (" << phone2.areacode << ") " << phone2.exchange << "-" << phone2.number << endl;
    cout << " Your number is (" << phone1.areacode << ") " << phone1.exchange << "-" << phone1.number << endl;
  return 0;
}
