/*
Sort an array of 0's 1's and 2's
TC--> O(N)
SC--> O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>&nums){
  int lo = 0;
  int hi = nums.size()-1;
  int mid = 0;

  while(mid<=hi){
    switch (nums[mid]) {
      //if the element is 0
      case 0:
      swap(nums[lo++],nums[mid++]);
      break;
      //if the element is 1
      case 1:
      mid++;
      break;
      //if the element is 2
      case 2:
      swap(nums[hi--],nums[mid]);
      break;
    }
  }
}

int main(){

vector<int>v{0,1,0,1,1,2,1,0,1,0,2,0};

sortColors(v);

for(auto el:v){
  cout<<el<<" ";
}

return 0;
}
