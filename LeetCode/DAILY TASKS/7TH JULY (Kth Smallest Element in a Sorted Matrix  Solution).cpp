class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        vector<int> ds;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long int todo=matrix[i][j];
                ds.push_back(todo);
            }
        }
        sort(ds.begin(),ds.end());
        return ds[k-1];
    }
};
