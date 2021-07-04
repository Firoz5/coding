class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i,l=0,k=0,x,y;
        vector<int> v;
        v = nums;
        l = nums.size();
        sort(v.begin(),v.end());
        for(i=0;i<l;i=i+2)
        {
            if(i<=l-2){
                x = min(v[i],v[i+1]);
                cout<<x;
            k=k+x;
                //cout<<v[i];
            }
            
        }
        return k;
    }
};