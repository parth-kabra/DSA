class Solution:
    def frequencySort(self, s: str) -> str:
        hashmap={}
        for i in s:
            if i not in hashmap:
                hashmap[i]=1
            else:
                hashmap[i]+=1
        
        res=""
        sort=sorted(hashmap.items(), key=lambda x: x[1], reverse=True)
        for i in sort:
            res+=i[0]*i[1]
        return res;
