class Solution {
public:
bool spec(vector<vector<int>>& mat , int i , int j){
    int m = mat.size();
    int n = mat[0].size();
    for(int col  = 0;col<n;col++){
        if(col!=j && mat[i][col]==1)return false;
    }
    for(int row = 0;row<m;row++){
        if(row!=i && mat[row][j]==1)return false;
    }
    return true;
}
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int cnt = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(mat[i][j]==1){
                    if(spec(mat,i,j))cnt++;
                }
            }
        }
        return cnt;
    }
};