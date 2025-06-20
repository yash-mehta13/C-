#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << " Enter the year : ";
  cin >> n;
  cout << endl;
  if((n%4 == 0 && n%100 != 0) || (n%100 == 0)){
    cout << n << " is a leap year " << endl;
  }
  return 0;
}
