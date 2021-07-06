#include<bits/stdc++.h>
using namespace std;
int main()
{

     vector<vector<int> >v= {{1,10,4,2},
                              {9,3,8,7},

                             {15,16,17,12}};
      int n=3,m=4;
    int min,max;
    int b=0,res;
    for(int i=0;i<n;i++)
    {
        min=INT_MIN;max=INT_MAX;b=0;
        for(int j=0;j<m;j++)
        {
            if(v[i][j]<max){
                max=v[i][j];
                b=j;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(v[j][b]>min){
                min=v[j][b];

            }
        }
        if(min==max)
        {
            cout<<min;
            break;
        }
    }
return 0;
}
