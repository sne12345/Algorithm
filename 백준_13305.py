import sys

min = sys.maxsize
n = (int)(input())

# list에 값 넣기
listDis = list(map(int,input().split()))
listCost = list(map(int,input().split()))

# 도시를 다니면서 비용을 더하기
result = 0
for i in range(n-1):
    if(i == 0):
        result += listDis[i] * listCost[i]
        min = listCost[i]
    else:
        if listCost[i] < min:
            min = listCost[i]
        result += listDis[i] * min

print(result)