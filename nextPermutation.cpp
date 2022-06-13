#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>&nums){
  int n = nums.size();
  int k,l;
  for(k = n-2;k>=0;k--){
    if(nums[k] < nums[k+1]){
      break;
    }
  }
  if(k < 0){
    reverse(nums.begin(),nums.end());
  }
   else{
     for(l = n-1; l > k; l--){
       if(nums[l] > nums[k]){
         break;
       }
     }
     swap(nums[k],nums[l]);
     reverse(nums.begin() + k + 1, nums.end());
   }
}

int main(){
 vector<int>v{1,3,4,5,2};
 nextPermutation(v);
 for(auto x:v){
   cout<<x<<" ";
 }



return 0;
}
