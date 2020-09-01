#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
const int MAX = 500000;

int main(void) {
    int n, data[MAX];
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &data[i]);
    }
    
    // 1. 산술평균
    double sum = 0.0;
    for(int i=0; i<n; i++){
        sum += data[i];
    }
    
    double averDou = sum / n;
    
    if (averDou >= 0)
        printf("%d\n", (int)(averDou + 0.5));
    else
        printf("%d\n", (int)(averDou - 0.5));
    
    // 2. 중앙값
    sort(data, data + n);
    printf("%d\n", data[n / 2]);
    
   
    sort(data, data+n);
    
    // 3. 최빈값
    int count[8001] = {0, }, max_count = 0, max_index = -1, key = 1;
    for(int i=0; i<n; i++){
        count[data[i] + 4000]++;
    }
    
    for(int i=0; i<8001; i++){
        if(count[i] > max_count){
            max_count = count[i];
            max_index = i - 4000;
            key = 1;
        }
        
        else if(key == 1 && max_count != 0){
            if(count[i] == max_count){
                max_count = count[i];
                max_index = i - 4000;
                key = 0;
            }
        }
    }
    printf("%d\n", max_index);
    

    // 4. 범위
    int min = 4000, max = -4000;
    for(int i=0; i<n; i++){
        if(data[i] > max)
            max = data[i];
        if (data[i] < min)
            min = data[i];
    }
    
    printf("%d\n", max - min);
    
    return 0;
}
