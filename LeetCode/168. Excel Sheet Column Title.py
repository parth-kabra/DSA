class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        res=""
        while columnNumber:
            columnNumber,r=divmod(columnNumber-1,26)
            res+=chr(65+r)
        return res[::-1]
