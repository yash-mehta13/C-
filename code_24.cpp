#include<bits/stdc++.h>
using namespace std;

/*
int sum(int n){
    static int ss = 0;
    if(n < 0){
        return 0;
    }
    ss += n;
    sum(n-1);
    return ss;
}
*/

void print(int n, int sum){
    if(n < 1){
        cout << sum << endl;
        return;
    }
    print(n - 1, sum+n);
}

int main(){
    /*int n;
    cout << " Enter the number n : " << endl;
    cin >> n;
    cout << " Sum = " << sum(n) << endl;
    */
   print(5,0);
  return 0;
}
