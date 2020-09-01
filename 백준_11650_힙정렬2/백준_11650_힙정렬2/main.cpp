#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1000000;

void Swap0(int **temp, int a, int b){
    int *tempp = temp[a];
    temp[a] = temp[b];
    temp[b] = tempp;
}

void max_heap(int **temp, int root, int bottom){
    int max_child;
    int left_child = root * 2 + 1;
    int right_child = root * 2 + 2;
    
    if(left_child <= bottom){
        if(left_child == bottom)
            max_child = left_child;
        else {
            if(temp[left_child][0] >= temp[right_child][0])
                max_child = left_child;
            else
                max_child = right_child;
        }
        
        if(temp[max_child][0] > temp[root][0]){
            Swap0(temp, max_child, root);
            max_heap(temp, max_child, bottom);
        }
    }
}

void heap_sort(int **temp, int size){
    int index;
    
    for(index = size / 2 - 1; index >= 0; index--){
        max_heap(temp, index, size - 1);
    }
    
    for(index = size - 1; index > 0; index--){
        Swap0(temp, index, 0);
        max_heap(temp, 0, index - 1);
    }
}

int main(void) {
    int n;
    cin >> n;
    
    int heap[MAX][2];
    int *temp[MAX];
    
    for(int i=0; i<n; i++){
        cin >> heap[i][0];
        cin >> heap[i][1];
    }
    
    // 행의 주소를 temp 배열에 저장
    for(int i=0; i<n; i++){
        temp[i] = heap[i];
    }
    
    heap_sort(temp, n);
    
    for(int i=0; i<n; i++){
        cout << temp[i][0] << " ";
        cout << temp[i][1] << "\n";
    }
    return 0;
}

