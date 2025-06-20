// Making Calculator using Functions
#include<bits/stdc++.h>
using namespace std;


int calculator(int a = 1,int b = 1, int m = 1){
  cout << " Enter the 1st Number 'a' : " << endl;
  cin>>a;
  cout << " Enter the 2nd Number 'b' : " << endl;
  cin>>b;
  cout << " Operation to be performed :  " << endl;
  cin>>m;
  switch(m){
    case 1:
    cout << " Addition of a & b : " << a + b << endl;
    break;
    case 2:
    cout << " Subtraction of a & b : " << a - b << endl;
    break;
    case 3:
    cout << " Multiplication of a & b : " << a*b << endl;
    break;
    case 4:
    cout << " Division of a & b : " << a/b << endl;
    break;

default:
break;
  }
  return 0;
}

int main(){
  cout << calculator() << endl;
  return 0;
}