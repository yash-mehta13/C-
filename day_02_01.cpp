#include<bits/stdc++.h>
using namespace std;
int main(){
  double a,b,c,d;
  cout << " Enter the 1st Number : " << endl;;
  cin >> a;
  cin >> b;
  cout << " The 1st Number is " << a << "/" << b << endl;
  cout << " Enter the 2nd Number : ";
  cin >> c;
  cin >> d;
  cout << " The 2nd Number is " << c << "/" << d << endl;
  char dir = _getwche();
  cin >> dir;
  switch (dir)
  {
    case '+':
    cout << " Addition = " << ((a*d) + (b*c))/(b*d) << endl;
    break;
    case '-':
    cout << " Subtraction = " << ((a*d) - (b*c))/(b*d) << endl;
    break;
    case '*':
    cout << " Multiplication = " << (a*c)/(b*d) << endl;
    break;
    case '/':
    cout << " Division = " << (a*d)/(b*c) << endl;
    break;
  
  default:
  cout << " NO OPERATION EXECUTED " << endl;
    break;
  }
  return 0;
}
