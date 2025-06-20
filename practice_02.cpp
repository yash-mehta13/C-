#include<bits/stdc++.h>
using namespace std;
int main(){
    // all amounts in dollars
    float amount;
    cout << " Enter the amount in Dollars : ";
    cin >> amount;
    double pound = 1.487 * amount;
    double franc = 0.172 * amount;
    double deutschemark = 0.584 * amount;
    double yen = 0.00955 * amount;
    cout << " British Pound : " << pound << endl;
    cout << " French Franc : " << franc << endl;
    cout << " German deutschemark : " << deutschemark << endl;
    cout << " Japanese Yen : " << yen << endl;
  return 0;
}
