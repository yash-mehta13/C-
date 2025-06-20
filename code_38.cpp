#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 4;

    //Up
    for(int i= 0; i <= (n-1); i++){
        //*
        for(int j=0; j <= i; j++){
            cout << "*";
        }

        //spaces
        for(int j=0; j <= 2*(n-i-1); j++){
            cout << " ";
        }
        
        //*
        for(int j=0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    //Down
    for(int i=0; i <= (n-1); i++){
        //*
        for(int j=0; j <= (n-i); j++){
            cout << "*";
        }

        //spaces
        for(int j=0; j <= 2*i; j++){
            cout << " ";
        }

        //*
        for(int j=0; j <= (n-i); j++){
            cout << "*";
        }
        cout << endl;
    }
  return 0;
}
