class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        if(numRows <= 0)
            return pascal;
        vector<int> a = {1};
        vector<int> b = {1, 1};
        if(numRows == 1) {
            pascal.push_back(a);
            return pascal;
        }
        else if(numRows == 2) {
            pascal.push_back(a);
            pascal.push_back(b);
            return pascal;
        }
        pascal.push_back(a);
        pascal.push_back(b);
        for(int i = 3; i <= numRows; i++) {
            vector<int> c(i);
            c[0] = 1;
            for(int j = 1; j < i-1; j++) {
                c[j] = pascal[pascal.size()-1][j-1] + pascal[pascal.size()-1][j];
            }
            c[i-1] = 1;
            pascal.push_back(c);
        }
        return pascal;
    }
};