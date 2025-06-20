#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][4] = {{1,2,3,4},
                     {1,2,3,4},
                     {1,2,3,4},
                     {1,2,3,4}};
    //int*arr = new int(5);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
  return 0;
}
