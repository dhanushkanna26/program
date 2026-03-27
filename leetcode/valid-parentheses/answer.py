class Solution:
    def isValid(self, s: str) -> bool:
        mapping = {
            ')':'(', ']':'[', '}':'{'
        }
        stack = []

        for i in s:
            if i not in mapping:
                stack.append(i)
            else:
                if len(stack) != 0 and stack[-1] == mapping[i]:
                    stack.pop()
                else:
                    return False

        return not stack
