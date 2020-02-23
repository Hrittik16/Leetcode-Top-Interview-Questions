class Solution {
public:
    int countPrimes(int n) {
        if(n <= 1)
            return 0;
        int count = 0;
        for(int i = 2; i < n; i++) {
            if(i == 2 || i == 3)
                count++;
            else {
                bool flag = 1;
                for(int j = 2; j <= sqrt(i); j++) {
                    if(i%j == 0) {
                        flag = 0;
                        break;
                    }
                }
                if(flag)
                    count++;
            }
        }
        return count;
    }
};