#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int>&prices){
  int maxPro = 0;
  int minPrice = INT_MAX;
  for(int i = 0; i < prices.size();i++){
  int minPrice = min(minPrice , prices[i]);
    maxPro = max(maxPro , prices[i] - minPrice);
  }
  return maxPro;
}

int main(){

vector<int>v{7,1,5,3,6,4};

cout<<maxProfit(v)<<endl;

return 0;
}
