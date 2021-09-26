
arrA_ = []
arrB_ = []

for i in range(3):
    a, b = map(int, input().split())
    arrA_.append(a)
    arrB_.append(b)

for i in range(3):
    if arrA_.count(arrA_[i]) == 1:
        ansA = arrA_[i]
    if arrB_.count(arrB_[i]) == 1:
        ansB = arrB_[i]

print(ansA, ansB)

