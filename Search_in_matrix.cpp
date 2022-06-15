#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>> & matrix, int target){
  if(!matrix.size()) return false;

  int n  = matrix.size();
  int m = matrix[0].size();

  int lo = 0;
  int hi = (n * m) -1;

  while(lo <= hi){
    int mid = (lo + (hi-lo) /2);
    if(matrix[mid/m][mid%m] == target){
      return true;
    }
    if(matrix[mid/m][mid%m] < target){
      lo = mid + 1;
    }
    else{
      hi = mid -1;
    }
  }
  return false;
}

int main(){

vector<vector<int>>v{{1,3,5,7},{10,11,16,20},{23,30,34,50}};
int target = 302;
bool res = searchMatrix(v,target);

cout<<res<<endl;


return 0;
}
