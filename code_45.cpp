#include<bits/stdc++.h>
using namespace std;

int swap(int, int);

int main(){
    int num, exe;
    cin >> num >> exe;

    cout << swap(num,exe);
  return 0;
}

int swap(int n, int e){
    int temp;
    temp = n;
    n = e;
    e = temp;

    cout << " num = " << n << endl;;
    cout << " exe = ";
    return e;
}