#include<iostream>
#include<unordered_map>
using namespace std;

int maxLen(int arr[],int n){
  unordered_map<int,int>mp;
  int maxi = 0;
  int sum = 0;

  for(int i = 0;i < n;i++){
    sum = sum + arr[i];
    if(sum==0){
      maxi = i+1;
    }
    else{
      if(mp.find(sum)!=mp.end()){
        maxi = max(maxi,i-mp[sum]);
      }
      else{
        mp[sum] = i;
      }
    }
  }
  return maxi;
}

int main(){

  int arr[] = {1,-1,3,2,-2,-8,1,7,10,23};
  int size = *(&arr+1)-arr;   //to find the size of array

 int res = maxLen(arr,size);

 cout<<res<<endl;

return 0;
}
