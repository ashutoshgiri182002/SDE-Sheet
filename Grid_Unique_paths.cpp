#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

  //TC --> exponantia and space copmplexity also
  int countPaths(int i,int j,int n,int m){
    if(i==n-1 and j==m-1) return 1;
    if(i>=n or j>=m) return 0;

    else return countPaths(i+1,j,n,m) + countPaths(i,j+1,n,m);
  }

  int uniquePaths(int m,int n){
    return countPaths(0,0,m,n);
  }

  //BY using DP
  //TC-->O(N*M) and same for space copmplexity
  int countPaths1(int i,int j,int n,int m,vector<vector<int>>&dp){
    if(i==n-1 and j==m-1) return 1;
    if(i>=n or j>=m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    else return dp[i][j] = countPaths1(i+1,j,n,m,dp) + countPaths1(i,j+1,n,m,dp);
  }

  int uniquePaths1(int m, int n){
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

    int num = countPaths1(0,0,m,n,dp);
    if(m==1 and n==1)
    return num;

    return dp[0][0];
  }

  //Optimise solution of this Problem

  int uniquePaths2(int m,int n){
    int N = n+m-2;
    int R = m-1;
    double res = 1;

    for(int i = 1;i<=R;i++){
      res = res * (N-R+i) / i;
    }
    return (int)res;
  }

};


int main(){

Solution obj;
int totalCount = obj.uniquePaths(2,3);
cout<<"The total number of unique Paths are "<<totalCount<<endl;

int totalCount1 = obj.uniquePaths1(2,3);
cout<<"The total number of unique Paths are "<<totalCount1<<endl;

int totalCount2 = obj.uniquePaths2(2,3);
cout<<"The total number of unique Paths are "<<totalCount2<<endl;

  return 0;
}
