#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define parent(x) (x-1)/2
const int MAX = 1000000;

void heap(int **data, int n){
    
    for(int i=1; i<n; i++){
        int child = i;
        
        while(child > 0){
            int root = parent(child);
            
            if(data[root][0] < data[child][0]){
                int *temp = data[root];
                data[root] = data[child];
                data[child] = temp;
            }
            child = root;
        }
    }
}

int main(void){
    
    int n;
    cin >> n;
    
    int data[MAX][2];
    
    int **temp = new *int[MAX];
    
    for(int i=0; i<n; i++){
        cin >> data[i][0];
        cin >> data[i][1];
    }
    
    // 행의 주소를 temp 배열에 저장
    for(int i=0; i<n; i++){
        temp[i] = data[i];
    }
    
    //heap(temp, n); // 힙을 만든다.
    
//    for(int i=n-1; i>=0; i--){
//
//        // 가장큰 숫자(root)를 맨 마지막 원소와 스왑
//        int temp = data[i];
//        data[i] = data[0];
//        data[0] = temp; // 맨마지막원소(가장큰원소)를 제외하고 다시 힙을 만든다.
//        heap(data, i);
//    }
//
    // 결과 출력
    for(int i=0; i<n; i++){
        printf("%d %d\n", data[i][0], data[i][1]);
    }
    return 0;
}
