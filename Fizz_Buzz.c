class Solution:
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        ret = []
        for x in range(1,n+1):
            if(x % 15 == 0):
                ret.append("FizzBuzz")
            elif(x % 5 == 0):
                ret.append("Buzz")
            elif(x % 3 == 0):
                ret.append("Fizz")
            else:
                ret.append(str(x))
                
        return ret
        
