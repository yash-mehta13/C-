#include<bits/stdc++.h>
using namespace std;

// Smallest and the largest number in an array
int main(){
  int nums[] = {99,100,55,47,86};
  int size = 5;
  int smallest = INT_MAX;
  int largest = -(INT_MAX);

  for(int i=0; i < size; i++){
    if(nums[i] < smallest){
      smallest = nums[i];
      cout << nums[i] << endl;
    }
    else{
      cout << " NOTHING " << endl;
    }
  }
  cout << " Smallest number is " << smallest << endl;

  for(int j=0; j < size; j++){
    if(nums[j] > largest){
      largest = nums[j];
      cout << nums[j] << endl;
    }
    else{
      cout << " NOTHING " << endl;
    }
  }
  cout << " Largest number is " << largest << endl;
  return 0;
}
