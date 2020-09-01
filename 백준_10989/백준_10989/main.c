#include <stdio.h>

int main(void){
    int data[10001] = {0,};
    long long int num;
    
    // 몇 개의 숫자를 입력할지
    scanf("%lld",&num);
    
    for(int i=0; i<num; i++) {// 정렬할 값 입력
        int tmp;
        scanf("%d",&tmp);
        data[tmp]++;
    }
    
    // 결과 출력
    for(int i=1; i<10001; i++){
        for(int j=0; j<data[i]; j++)
            printf("%d\n", i);
    }
    return 0;
}

