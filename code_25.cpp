#include<bits/stdc++.h>
using namespace std;

// Factorial
int factorial(int n){
    if( n == 0 || n == 1){
        return 1;
    }
    else if(n < 0){
        return 0;
    }
    
    int fac = factorial(n-1)*n;
    return fac;
}

int main(){
    int n;
    cout << " Enter the number n : " << endl;
    cin >> n;
    cout << " Factorial of n is " << factorial(n) << endl;
  return 0;
}
