class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        string s,t;
        int i,k=0,x=0,j=0;
        for(i=0;i<words.size();i++)
        {
            for(j=0;j<words[i].size();j++)
            {
                t=words[i][j];
                if(allowed.find(t)==-1)
                {
                    break;
                }
                else{
                    k++;
                }
            }
            if(k==words[i].length())
            {
                x++;
            }
            t='\0';
            k=0;
        }
        return x;
    }
};