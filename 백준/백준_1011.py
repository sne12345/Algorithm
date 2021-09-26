import math

n = (int)(input())

for i in range(n):
    x,y = map(int, input().split())
    diff = y-x
    if diff <= 3:
        print(diff)
    else :
        x = (int)(math.sqrt(diff))
        if diff == x * x:
            print(2 * x - 1)
        elif diff <= (x * x + x):
            print(2 * x)
        else:
            print(2 * x + 1)

