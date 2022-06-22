#include<iostream>
#include<vector>
#include<set>
using namespace std;

int longestConsecutive(vector<int>&nums){
  set<int>hashSet;
  for(int num: nums){
    hashSet.insert(num);
  }

  int longestLength = 0;

  for(int num: nums){
    if(!hashSet.count(num-1)){
      int currentNum = num;
      int currentLength = 1;

      while(hashSet.count(currentNum+1)){
        currentNum +=1;
        currentLength +=1;
      }

      longestLength = max(longestLength,currentLength);
    }
  }
  return longestLength;
}

int main(){

vector<int>v{101,100,1,3,102,4,2};

int res  = longestConsecutive(v);

cout<<res<<endl;

return 0;
}
