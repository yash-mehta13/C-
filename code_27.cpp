#include<bits/stdc++.h>
using namespace std;

int add(int n){
    if( n == 0){
        return 0;
    }
    int sum = add(n-1) + n;
    return sum;
}

int main(){
    int n;
    cout << " Enter the number n : " << endl;
    cin >> n;
    cout << " Sum of n natural numbers is " << add(n) << endl;
  return 0;
}
