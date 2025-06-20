#include<bits/stdc++.h>
using namespace std;

void repchar(char ch, int i);

int main(){
  repchar('-',50);
  cout << endl;
  cout << " Domain " << setw(12) << " Details " << endl;
  repchar('*',30);
  cout << endl;
  cout << " Name " << setw(12) << " Yash Mehta " << endl;
  cout << " City " << setw(12) << " Vadodara " << endl;
  cout << " State " << setw(12) << " Gujarat " << endl;
  cout << " School " << setw(12) << " DPS Harni " << endl;
  repchar('-',50);
  return 0;
}

void repchar(char ch, int i){
  for(int j = 1; j<=i; j++){
    cout << ch; 
  }
}
