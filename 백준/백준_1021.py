from collections import deque

n, m = map(int, input().split())

deq = deque(i+1 for i in range(n))
li = list(map(int, input().split()))

sum = 0
for i in range(m):
    diff = deq.index(li[0])
    diff_rev = len(deq) - diff

    if diff == 0:
        li.pop(0)
        deq.popleft()
    elif diff < diff_rev:
        deq.rotate(-diff)
        sum += diff
        li.pop(0)
        deq.popleft()
    else:
        deq.rotate(diff_rev)
        sum += diff_rev
        li.pop(0)
        deq.popleft()

print(sum)