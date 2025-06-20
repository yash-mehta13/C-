#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){
  vector<int> temp;
  int sq = sqrt(n);
  for(int i = 1; i <= sq; i++){
    if(n % i == 0){
      temp.push_back(i);
      if(i != n/i){
        temp.push_back(n/i);
      }
    }
  }
  sort(temp.begin(),temp.end());
  return temp;
}
// Number divisor
int main(){
/*
  int n;
  cout << " Enter the number : ";
  cin >> n;

  for (int i = 1; i <= n; i++){
    if(n % i == 0){
      cout << " Divisor of number n : " << i << endl;
    }
  }*/
  int a;
  cout << " Enter the number : " << endl;
  cin >> a;
  vector<int> vec = divisors(a);
  for(auto i : vec /* for each */){
    cout << i << endl;
  }
  return 0;
}
