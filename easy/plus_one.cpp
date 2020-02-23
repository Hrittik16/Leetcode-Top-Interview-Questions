class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> newDigits(digits.size());
        int sum = 0, carry = 0, i = digits.size()-1;
        sum = digits[i]+1;
        carry = sum/10;
        sum = sum%10;
        newDigits[i] = sum;
        i--;
        while(carry != 0 && i >= 0) {
            sum = digits[i]+carry;
            carry = sum/10;
            sum = sum%10;
            newDigits[i] = sum;
            i--;
        }
        while(i >= 0) {
            newDigits[i] = digits[i];
            i--;
        }
        if(carry != 0) {
            newDigits.insert(newDigits.begin(), carry);
        }
        return newDigits;
    }
};