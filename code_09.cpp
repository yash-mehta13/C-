// FUNCTIONS
#include<bits/stdc++.h>
using namespace std;

int add(int a = 8, int b = 5){
  cout << "Enter a : " << endl;
  cin >> a;
  cout << "Enter b : " << endl;
  cin >> b;
  int result = a + b;
  return result;
}

void print(int result){
  cout << " Addition = " << result << endl;
}

int main(){
    cout << add() << endl;
  return 0;
}
