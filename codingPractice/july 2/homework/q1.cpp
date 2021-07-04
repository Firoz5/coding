class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i,j,s=0;
        for(i=0;i<arr.size()-1;i++)
        {
            for(j=i+1;j<arr.size();j++)
            {
                if(arr[j]>arr[i])
                {
                    s++;
                    break;
                }
            }
        }
        return s;
    }
};