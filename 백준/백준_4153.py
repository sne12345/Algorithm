
while(True):
    listA = list(map(int, input().split()))

    if sum(listA) == 0:
        break

    maxInt = max(listA)
    listA.remove(maxInt)

    if listA[0] ** 2 + listA[1] ** 2 == maxInt ** 2:
        print('right')
    else:
        print("wrong")