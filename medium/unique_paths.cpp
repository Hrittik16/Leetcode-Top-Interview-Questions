class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m <= 0 && n <= 0)
            return 0;
        m--;
        n--;
        long long int total = m+n;
        if(n > m) n = m;
        int x = n;
        long long int prod1 = 1, prod2 = 1;
        for(int i = 0; i < x; i++) {
            prod1 *= total;
            prod2 *= n;
            total--;
            n--;
        } 
        int ans = prod1/prod2;
        return ans;
    }
};