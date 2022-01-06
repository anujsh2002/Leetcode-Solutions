class Solution {
public:
    bool carPooling(vector<vector<int>>& trip, int cap) {
        int n=trip.size();
     
        vector<int>store(10000,0);
        for(int i=0;i<n;i++)
        {
            for(int j=trip[i][1];j<trip[i][2];j++) store[j]+=trip[i][0];
        }
        for(int i=0;i<=9999;i++)
            if(store[i]>cap)
                return false;
        
        return true;
    }
};