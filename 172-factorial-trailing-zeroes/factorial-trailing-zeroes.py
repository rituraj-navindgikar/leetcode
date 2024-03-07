class Solution:
    def trailingZeroes(self, n: int) -> int:
        ans = 0
        num = n
        den = 5

        while(num >= den):
            ans += num//den
            den *= 5
        return ans     