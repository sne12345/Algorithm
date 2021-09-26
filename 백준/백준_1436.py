n = (int)(input())

num = 666
total = 0

while True:
    if '666' in str(num):
        total += 1
    if total == n:
        break
    num += 1

print(num)