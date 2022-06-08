#include<iostream>
#include<vector>
using namespace std;

//by using hasing
// TC--> O(2N) and SC O(N)
vector<int>find_missing_repeating(vector<int>&arr){
  int n = arr.size()+1;

  vector<int>substitute(n,0); //initialise the substitute array with 0 of size n+1.
  vector<int>ans;             //initialise the ansewer array

  for(int i =0;i<arr.size();i++){
    substitute[arr[i]]++;
  }

  for(int i = 1;i<=arr.size();i++){
    if(substitute[i] == 0 or substitute[i] > 1){
      ans.push_back(i);
    }
  }

  return ans;
}

vector<int>find_missing_repeating1(const vector<int>&arr){
  long long int len = arr.size();
  long long int S = (len * (len+1))/2;
  long long int P = (len * (len+1) * (2 * len + 1))/6;
  long long int missingNumber = 0;
  long long int repeating = 0;

  for(int i = 0; i<arr.size();i++){
    S -= (long long int)arr[i];
    P -= (long long int)arr[i]*(long long int)arr[i];
  }

  missingNumber = (S + P/S)/2;
  repeating = missingNumber - S;

  vector<int>ans;
  ans.push_back(repeating);
  ans.push_back(missingNumber);

  return ans;
}


int main(){

vector<int>v{1,1,2,3,4,6};

//vector<int>res = find_missing_repeating(v);
vector<int>res = find_missing_repeating1(v);
cout<<res[0]<<" "<<res[1]<<endl;
return 0;
}
