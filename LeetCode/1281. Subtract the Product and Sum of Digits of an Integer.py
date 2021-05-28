v={
    "1":1,
    "2":2,
    "3":3,
    "4":4,
    "5":5,
    "6":6,
    "7":7,
    "8":8,
    "9":9,
    "0":0
}
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        s=str(n)
        pro=1
        add=0
        for i in s:
            pro*=v[i]
            add+=v[i]
        return pro-add
