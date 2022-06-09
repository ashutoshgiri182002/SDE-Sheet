#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0) {
            return mergedIntervals;
        }
        sort(intervals.begin(), intervals.end());
        vector<int> tempInterval = intervals[0];

        for(auto it : intervals) {
            if(it[0] <= tempInterval[1]) {
                tempInterval[1] = max(it[1], tempInterval[1]);
            } else {
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }

int main(){

vector<vector<int>>v{{1,3},{2,6},{8,10},{8,9},{9,11},{15,18},{2,4},{16,17}};

vector<vector<int>>res = merge(v);
for (auto it: res) {
   cout << it[0] << " " << it[1] << "\n";
 }

return 0;
}
