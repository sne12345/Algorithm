

n = (int)(input())
li = list(map(int, input().split()))

t = max(li) + 1

while True:
    flag = 1
    for i in li:
        if t % i != 0:
            flag = 0
            break
        if t / i not in li:
            flag = 0
            break
    if flag:
        print(t)
        break
    t += 1
