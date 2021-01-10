
ch = []
arr = [[]]

a, b, c = input().split()
a = int(a)
b = int (b)
c = int (c)

for i in range(a):
    for j in range(b):
        arr[i].append(0)

for i in range(c):
    x, y = input().split()
    x = (int)(x)
    y = (int)(y)
    arr[x][y] = 1

for i in range(a):
    print(arr[i])


