#include<bits/stdc++.h>
using namespace std;

int main(){
  int a = 10;
  int* ptr = &a;
  int** parentptr = &ptr;

  cout << &a << endl;
  cout << ptr << endl;
  cout << **(parentptr) << endl;
  return 0;
}
