class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> v;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<matrix.size();j++){
                matrix[j][v[i][1]]=0;
            }for(int j=0;j<matrix[0].size();j++) matrix[v[i][0]][j]=0;
        }
    }
};