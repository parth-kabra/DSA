class Solution:
    def reverse(self, x: int) -> int:
        if(x>=2**31-1 or x<= -2**31):
            return 0;
        s=str(x)
        if(x>=0):
            rev=s[::-1]
        else:
            temp=s[1:]
            temp1=temp[::-1]
            rev="-"+temp1
        if(int(rev))>=2**31-1 or int(rev)<= -2**31:
            return 0
        else:
            return int(rev)
        
