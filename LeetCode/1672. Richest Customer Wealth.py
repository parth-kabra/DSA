class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res=0
        for i in accounts:
            if(sum(list(i)) > res):
                res=sum(list(i))
        return res;
