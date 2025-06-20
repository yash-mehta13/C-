#include<bits/stdc++.h>
using namespace std;

// To check whether a number is in the power of 2

int main(){
    int n;
    cout << " Enter the number n : " << endl;
    cin >> n;
    for(int i = 1; pow(2,i) <= n; i++){
        if( pow(2,i) == n){
            cout << " The number " << n << " is in the power of 2 " << " for " << i << endl;
        }
        else{
            cout << " The number "<< n << " is not in the power of 2 " << " for " << i << endl;
        }
    }
  return 0;
}
