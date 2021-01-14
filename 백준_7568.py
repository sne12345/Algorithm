n = (int)(input())
li = []

for i in range(n):
    a, b = map(int, input().split())
    li.append([a,b,i+1])

li = sorted(li, key=lambda li: -li[1])

ans = [[i+1, tmp[2]] for i, tmp in zip(range(n), li)]


for i in range(n-1):
    for j in range(i+1,n):
        if li[i][0] <= li[j][0]:
            ans[j][0] = ans[i][0]

ans = sorted(ans, key=lambda ans: ans[1])

for i in range(n):
    print(ans[i][0], end=" ")