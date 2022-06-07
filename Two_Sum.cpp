
#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>&nums,int target){
    vector<int>res;
    unordered_map<int,int>mp;
    
    for(int i = 0;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.end()){
            res.emplace_back(i);
            res.emplace_back(mp[target-nums[i]]);
        }
        mp[nums[i]]=i;
    }
    
    return res;
}

int main(){
  
  vector<int>v{2,7,11,15};
  int target = 18;
  
  vector<int>answer =twoSum(v,target);
   
   cout<<answer[0]<<" "<<answer[1]<<endl;
    return 0;
}
