#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
  for(int i = n; i > 0; i--){
    for(int j = 0; j < n - i - 1; j++){
    cout << " ";
    }
    for(int j = 2*i + 1; j > 0; j--){
    cout << "*" ;
    }
    for(int j = 0; j < n; j++){
    cout << " ";
    }
    cout << endl;
  }
}
int main(){
    pattern(9);
  return 0;
}
