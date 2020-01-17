class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = [1] * len(nums)
        productFromLeft = 1
        for index in range(len(nums)):
            output[index] *= productFromLeft
            productFromLeft *= nums[index]
        productFromRight = 1
        for index in range(len(nums)-1, -1, -1):
            output[index] *= productFromRight
            productFromRight *= nums[index]
        return output
        
