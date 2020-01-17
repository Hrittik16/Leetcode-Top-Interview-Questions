class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix = []
        suffix = [None]*len(nums)
        output = []
        for i in range(0, len(nums)):
            if i == 0:
                prefix.append(nums[i])
            else:
                prefix.append(nums[i]*prefix[i-1])
        i = len(nums)-1
        while i >= 0:
            if i == len(nums)-1:
                suffix[i] = nums[i]
            else:
                suffix[i] = nums[i]*suffix[i+1]
            i -= 1
        for i in range(0, len(nums)):
            sol = 1
            if i-1 >= 0:
                sol *= prefix[i-1]
            if i+1 <= len(nums)-1:
                sol *= suffix[i+1]
            output.append(sol)
        return output
    
        
