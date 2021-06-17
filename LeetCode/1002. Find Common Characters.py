class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        d = defaultdict(list)
        for word in words:
            s = set(word)
            for c in s:
                d[c].append(word.count(c))
        
        ans = []
        for c,l in d.items():
            if len(l) == len(words):
                ans += [c] * min(l)
        return ans
