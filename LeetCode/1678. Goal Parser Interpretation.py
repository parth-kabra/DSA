class Solution:
    def interpret(self, command: str) -> str:
        s=command.replace("()","o").replace("(al)","al")
        return s
