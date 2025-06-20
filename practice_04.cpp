#include<bits/stdc++.h>
using namespace std;
int main(){
  int num;
  cout << " Enter the number : ";
  cin >> num;
  cout << " TABLE : " << endl;

  for(int j = 1; j <= 20; j++){
    for(int i = 1; i <= 10; i++){
      cout << 10*(j-1)*num + num*i << " ";
    } 
    cout << endl;
  }
  return 0;
}
