class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>> res(img);
        int c;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=img[i][j];
                c=1;
                
                if(i-1>=0){
                    res[i][j]+=img[i-1][j];
                    c++;
                }
                
                if(i+1<m){
                    res[i][j]+=img[i+1][j];
                    c++;
                }
               
                if(j-1>=0){
                    res[i][j]+=img[i][j-1];
                    c++;
                }
                
                if(j+1<n){
                    res[i][j]+=img[i][j+1];
                    c++;
                }
               
                if(i-1>=0 && j-1>=0){
                    res[i][j]+=img[i-1][j-1];
                    c++;
                }
               
                if(i-1>=0 && j+1<n){
                    res[i][j]+=img[i-1][j+1];
                    c++;
                }
               
                if(i+1<m && j-1>=0){
                    res[i][j]+=img[i+1][j-1];
                    c++;
                }
                
                if(i+1<m && j+1<n){
                    res[i][j]+=img[i+1][j+1];
                    c++;
                }
                res[i][j] /= c;
            }
        }
        return res;
    
    }
};