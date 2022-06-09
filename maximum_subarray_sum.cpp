#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int>& arr){
  int sum = 0;
  int maxi = INT_MIN;

  for(auto it:arr){
    sum +=it;
    maxi = max(maxi,sum);
    if(sum < 0) sum = 0;
  }
  return maxi;

}

int main(){
vector<int>v{-2,-3,4,-1,-2,1,5,-3};

cout<<maxSubarraySum(v);
return 0;
}
