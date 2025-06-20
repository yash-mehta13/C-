#include<bits/stdc++.h>
using namespace std;

double power(char, double);

int main(){
    double num, answer;
    double pow;
    char ch;

    cout << " Enter the number : ";
    cin >> num;
    cout << " Want to enter the power(y/n) : ";
    cin >> ch;

    if(ch == 'y'){
        cout << " Enter the power : ";
        cin >> pow;
        answer = power(num,pow);
        cout << answer;
    }
    else{
        answer = power(num,2);
        cout << " The answer is " << answer;
    }
  return 0;
}

double power(char n, double p = 2){
    double ans;
    for(int i = 1; i <= p ; i++){
        ans *= n;
    }
    return ans;
}