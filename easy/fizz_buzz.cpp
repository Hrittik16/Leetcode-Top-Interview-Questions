class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> list_of_strings;
        for(int i = 1; i <= n; i++) {
            if(i%3 == 0 && i%5 == 0)
                list_of_strings.push_back("FizzBuzz");
            else if(i%3 == 0)
                list_of_strings.push_back("Fizz");
            else if(i%5 == 0) 
                list_of_strings.push_back("Buzz");
            else 
                list_of_strings.push_back(to_string(i));
        }
        return list_of_strings;
    }
};