class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int i;
        vector<int> v1;
        for(i=0;i<nums.size();i++)
        {
            v1.insert(v1.begin()+index[i],nums[i]);
        }
        return v1;
    }
};