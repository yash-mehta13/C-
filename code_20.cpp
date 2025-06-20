#include<bits/stdc++.h>
using namespace std;

// HCF of two numbers
int gcd(int a,int b){
    int min = (a < b) ? a : b;
    for(int i = min; i > 0; i++){
        if(b % i == 0 && a % i ==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int a;
    int b;
    cout << " Enter a and b : " << endl;
    cin >> a;
    cin >> b;
    cout << gcd(a,b) << endl;
  return 0;
}
