class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prod = 1
        output = []
        num_of_zeros = 0
        for i in nums:
            if i == 0:
                num_of_zeros += 1
                continue
            prod *= i
        if num_of_zeros == 1:
            for i in nums:
                if i == 0:
                    output.append(prod)
                else:
                    output.append(0)
        elif num_of_zeros >= 1:
            for i in nums:
                output.append(0)
        else:
            for i in nums:
                output.append(prod//i)
        return output
        
