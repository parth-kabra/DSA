class Solution:
    def bitwiseComplement(self, n: int) -> int:
        b=bin(n).replace("0b","")
        res=""
        for i in str(b):
            if i=="0":
                res+="1"
            else:
                res+="0"
        return int(res,2)
