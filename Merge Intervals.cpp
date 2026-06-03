class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
       /* int i=0;
        int j=i+1;
        while(i<n){
           int istart=intervals[i][0];
           int iend= intervals[i][1];
           int jstart=intervals[j][0];
           int jend=intervals[j][1];
           if(iend>jstart){
            intervals[i][1]=jend;
           }
           
        }
        */
        vector<vector<int>>res;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<int>current=intervals[0];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=current[1])
                current[1] = max(current[1], intervals[i][1]);
                else{
                    res.push_back(current);
                    current=intervals[i];
                }
        }
        res.push_back(current);
                 return res;
        }
};
