class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        ans = 0
        a = 0
        l = len(columnTitle)
        for i in range(l):
            ans += ((26**a) * (ord(columnTitle[l-i-1]) - 64))
            print(a)
            a+=1

        return ans   