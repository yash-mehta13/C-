#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n == 0){
        return false;
    }
    if(n == 1){
        return true;
    }
    else{
        for(int i = 2; i < n; i++){
            if(i != n){
                if( n%i != 0){
                    return true;
                }
            }
        }
        return false;
    }
}

int main(){
    int n;
    cout << " Enter the number n : " << endl;
    cin >> n;
    cout << "Prime number : " << isprime(n) << endl;
  return 0;
}
