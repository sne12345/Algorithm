
n = (int)(input())

for i in range(n):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())

    # 피타고라스 거리 : y
    y = ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5
    rs = r1 + r2
    rm = abs(r1 - r2)

    if y == 0:
        if r1 == r2:
            print(-1)
        else:
            print(0)
    else:
        if rs == y or rm == y:
            print(1)
        elif rs > y and rm < y:
            print(2)
        else:
            print(0)