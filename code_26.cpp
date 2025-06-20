#include<bits/stdc++.h>
using namespace std;

//Fibonacci Series

int series(int n){
    if(n <= 1){
        return n;
    }
    int last = series(n-1);
    int slast = series(n-2);
    return last + slast;
}
int main(){
    int n;
    cout << " Enter the number n : " << endl;
    cin >> n;
    cout << " The Fibonacci Series for the number n is " << series(n) << endl;
  return 0;
}
