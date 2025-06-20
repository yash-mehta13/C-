#include<bits/stdc++.h>
using namespace std;

// Multiplication Table

int main(){
  int n;
  cout << " Enter the number : " << endl;
  cin >> n;
  for(int i = 1; i <= n; i++){
    cout << n << "*" << i << "=" << n*i << endl;
  }
  return 0;
}
