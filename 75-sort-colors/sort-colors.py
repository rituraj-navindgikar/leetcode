class Solution:
    def sortColors(self, nums: List[int]) -> None:
        zero, one, two = 0,0,0
        arr = []
        for i in nums:
            if i == 0:
                zero += 1
                arr.append(0)
            elif i == 1: one += 1
            else: two += 1

        for i in range(one): arr.append(1)
        for i in range(two): arr.append(2)

        for i in range(len(nums)): nums[i] = arr[i]

