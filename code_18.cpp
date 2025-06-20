#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 675;
    for(int i = 0; i < 3; i++){
        int temp = n % 10;
        cout << temp << endl;
        n = n / 10;
        cout << "n" << n << endl;
    }
  return 0;
}
