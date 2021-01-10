
n = int(input())

idx = 2
while n != 1:
    if n % idx == 0:
        print(idx)
        n = n / idx
    else:
        idx += 1

"""


int n;
cin >> n;

int idx = 2;
while(n != 1){
    if(n % idx == 0){
        printf("%d\n", idx);
        n /= idx;
    } else {
        idx += 1;
    }
}

"""

