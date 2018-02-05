class Solution:
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        sum = 0
        a = 1
        
        for x in nums:
            if(a == 1):
                sum = sum + x 
                a = 0
            else:
                a = 1
                
        #print("sum {}".format(sum))
        return sum
