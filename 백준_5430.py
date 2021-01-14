
n = (int)(input())

for i in range(n):
    funcstr = input()
    list_n = (int)(input())

    de = (str)(input())[1:-1].split(',')
    funcstr = funcstr.replace('RR','')

    if list_n == 0:
        de = []

    r_flag = 0
    flag = 1
    for j in range(len(funcstr)):
        if funcstr[j] == 'R':
            r_flag = not r_flag
        else:
            if len(de) == 0:
                print("error")
                flag = 0
                break

            if r_flag:
                de.pop(len(de)-1)
            else:
                de.pop(0)


    if flag == 1:
        if r_flag:
            de.reverse()
        print('[', end='')
        print(','.join(de), end='')
        print(']')
