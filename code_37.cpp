#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;

    //upward triangle
    for(int i = 0; i <= n; i++){
        //space
        for(int j = 0; j <= (n-i-1); j++){
            cout << " ";
        }
        cout << "*";

        //middle space
        if( i != 0){
            for(int j = 0; j <= (2*i - 1); j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    //downward triangle
    for(int i = 0; i <= (n-2); i++){
        //space
        for(int j = 0; j <= (i+1); j++){
            cout << " ";
        }
        cout << "*";

        //middle space and *
        if(i != (n-1)){
            //spaces
            for(int j = 0; j <= 2*(n-i) - 5; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
  return 0;
}

