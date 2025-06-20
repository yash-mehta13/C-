#include<bits/stdc++.h>
using namespace std;

int main(){
    /**/
    string arr[5][5] = {{"*","*","*","*","*"},
                    {"*","*","*","*","*"},
                    {"*","*","*","*","*"},
                    {"*","*","*","*","*"},
                    {"*","*","*","*","*"}};
    
    for(int i = 5; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << arr[0][0] << " ";
        }
        cout << "\n";
    }
  return 0;
}
