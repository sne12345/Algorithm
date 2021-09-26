

def stars(r, c, n):
    if (r+1) * (c+1) == n * n:
        print("*")
        return

    if r % 3 == 1 and c % 3 == 1:
        print(" ", end="")
        stars(r, c + 1, n)
    elif r == 0 and c == 0:
        print("*", end="")
        stars(r, c+1, n)
    elif r >= n / 3 and r < (n / 3 * 2) and c >= n / 3 and c < (n / 3 * 2):
        print(" ", end="")
        stars(r, c + 1, n)
    elif c % n == n-1:
        print("*")
        stars(r+1, 0, n)
    else:
        print("*", end="")
        stars(r, c+1, n)

p = (int)(input())
stars(0, 0, p)