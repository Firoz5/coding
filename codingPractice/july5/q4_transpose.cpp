#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> transpose(vector<vector<int>>& nums) {
	vector<vector<int>> v1(nums[0].size(), vector<int>(nums.size()));
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums[0].size(); j++) {
			v1[j][i] = nums[i][j];
		}
	}
	return v1;
 }

int main(){
    vector<vector<int>> v={{2,4,-1},{-10,5,11},{18,-7,6}};
    vector<vector<int>> res=transpose(v);
    for(int i=0;i<res.size();i++){
        for(auto it: res[i]){
            cout<<it<<" ";
        }
            cout<<endl;
    }

}
