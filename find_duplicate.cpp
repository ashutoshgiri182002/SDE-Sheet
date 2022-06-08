/*

Find the duplicate no. in an array of n+1 size having no between 1 to n(include)
TC--> O(N)
SC--> O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>&nums){
  int slow = nums[0];
  int fast = nums[0];
  do{
    slow = nums[slow];
    fast = nums[nums[fast]];
  }while(slow !=fast);

  fast = nums[0];
  while(slow!=fast){
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
}

int main(){

  vector<int>v{1,2,4,3,5,2};
  cout<<findDuplicate(v);

return 0 ;
}
