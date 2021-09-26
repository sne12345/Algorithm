n = (int)(input())

li = []

for i in range(n):
    x, y = map(int, input().split())
    li.append([x,y])

for i in li:
    cnt = 1
    for j in li:

        if i[0] < j[0] and i[1] < j[1]:
            cnt += 1
    print(cnt, end=" ")

