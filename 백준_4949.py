
from collections import deque
deq = deque()

while True:

    s = input()
    flag = 1

    if s[0] == '.':
        break

    for i in range(len(s)):

        if s[i] == '[' or s[i] == '(':
            deq.append(s[i])
        elif s[i] == ']':
            if len(deq) != 0 and deq[len(deq)-1] == '[':
                deq.pop()
            else:
                flag = 0
                break
        elif s[i] == ')':
            if len(deq) != 0 and deq[len(deq)-1] == '(':
                deq.pop()
            else:
                flag = 0
                break

    if flag == 1 and len(deq) == 0:
        print("yes")
    else:
        print("no")

    deq.clear()