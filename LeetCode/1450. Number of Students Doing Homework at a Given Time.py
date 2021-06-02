class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        res=0
        for i in range(len(startTime)):
            l=range(startTime[i],endTime[i]+1)
            if queryTime in l:
                res+=1
        return res
