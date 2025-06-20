#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {1,2,3,1,2,3,4};
  int size = 7;

  for(int i = 0; i <= size-1; i++){
    for(int j = 0; j <= size-1; j++){
      if(arr[i] && arr[j]){
        cout << arr[i] << " is not unique ";
        cout << endl;
      }
      else{
        cout << "YES" << endl;
      }
    }
  }
  return 0;
}