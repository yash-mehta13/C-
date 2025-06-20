#include<bits/stdc++.h>
using namespace std;

//Recurssion 

void print(int n){
    if( n < 0){
        return;
    }
    cout << n << endl;
    print(n-1);
}
int main(){
    print(4);
  return 0;
}
