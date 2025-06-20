#include<bits/stdc++.h>
using namespace std;

int number(int n = 0){
    cout << " Enter the number : " << endl;
    cin >> n;
    double result = log10(n) ;
    double no = result + 1;
    return no;
}
int main(){
    cout << number() << endl;
  return 0;
}
