#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>&nums){
  int cnt = 0;
  int element = 0;

  for(int x:nums){
    if(cnt==0){
      element = x;
    }
    if(x==element)cnt++;
    else cnt--;
  }
  return element;
}

int main(){

vector<int>v{7,7,5,7,5,1,5,7,5,7,7,5,5,5,5};

cout<<majorityElement(v);

return 0;
}
