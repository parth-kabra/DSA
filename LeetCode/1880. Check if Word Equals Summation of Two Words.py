class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        d={'a':'0','b':'1','c':'2','d':'3','e':'4','f':'5','g':'6','h':'7','i':'8','j':'9'}
        def fun(s,d):
            s1=''
            for i in s:
                s1+=d[i]
            return int(s1)
        return fun(firstWord,d) + fun(secondWord,d) == fun(targetWord,d)
