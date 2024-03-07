class Solution:
    def isHappy(self, n: int) -> bool:
        while(n > 4):
            ans = 0
            string = str(n)
            for i in range(len(string)):
                ans += int(string[i]) * int(string[i]) 
            n = int(ans)            
        if n == 1:
            return True
        return False


            
            