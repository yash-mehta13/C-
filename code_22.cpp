#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int length = to_string(n).length();
    int temp = n;
    int sum = 0;
    while(temp > 0){
        sum += pow((temp%10),length);
        temp = temp/10;
    }
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout << " Enter the number n : " << endl;
    cin >> n;
    cout << isArmstrong(n) << endl;
  return 0;
}
