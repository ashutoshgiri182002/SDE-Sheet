#include<iostream>
#include<vector>
using namespace std;

vector<int>majorityElementII(vector<int>&nums){

  int el1 = -1;
  int el2 = -1;
  int cnt1 = 0;
  int cnt2 = 0;

  for(int i = 0;i<nums.size();i++){
    if(el1==nums[i]){
      cnt1++;
    }
    else if(el2==nums[i]){
      cnt2++;
    }
    else if(cnt1==0){
      el1 = nums[i];
      cnt1 = 1;
    }
    else if(cnt2==0){
      el2 = nums[i];
      cnt2 = 1;
    }
    else{
      cnt1--;
      cnt2--;
    }
  }
  int c1 = 0,c2=0;
  for(int i = 0;i<nums.size();i++){
    if(el1==nums[i])c1++;
    else if(el2==nums[i])c2++;
  }
  vector<int>temp;
  if(c1>nums.size()/3)
  temp.push_back(el1);
   if(c2>nums.size()/3)
  temp.push_back(el2);

  return temp;
}

int main(){

vector<int>v{1,1,1,1,2,2,2,2,3,3};

vector<int>res = majorityElementII(v);

cout<<res[0]<<" "<<res[1];

return 0;
}
