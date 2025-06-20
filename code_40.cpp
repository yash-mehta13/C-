#include<bits/stdc++.h>
using namespace std;

double power_1(double, int p=2);

int main(){
    double num, answer;
    int pow;
    char ch;

    cout << " Enter the number : ";
    cin >> num;
    cout << " Want to enter the power(y/n) : ";
    cin >> ch;

    if(ch == 'y'){
        cout << " Enter the power : ";
        cin >> pow;
        answer = power_1(num,pow);
        cout << answer;
    }
    else{
        answer = num*num;
        cout << " The answer is " << answer;
    }
  return 0;
}

double power_1(double n, int p){
    double ans;
    for(int i = 1; i <= p ; i++){
        ans *= n;
    }
    return ans;
}