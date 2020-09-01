#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1000000;
int heap[MAX][2];

void Swap0(int a, int b){
    int temp = heap[a][0];
    heap[a][0] = heap[b][0];
    heap[b][0] = temp;
}

void Swap1(int a, int b){
    int temp = heap[a][1];
    heap[a][1] = heap[b][1];
    heap[b][1] = temp;
}

void max_heap(int root, int bottom){
    int max_child;
    int left_child = root * 2 + 1;
    int right_child = root * 2 + 2;
    
    if(left_child <= bottom){
        if(left_child == bottom)
            max_child = left_child;
        else {
            if(heap[left_child][0] >= heap[right_child][0])
                max_child = left_child;
            else
                max_child = right_child;
        }
        
        if(heap[max_child][0] > heap[root][0]){
            Swap0(max_child, root);
            Swap1(max_child, root);
            max_heap(max_child, bottom);
        }
    }
}

void heap_sort(int size){
    int index;
    
    for(index = size / 2 - 1; index >= 0; index--){
        max_heap(index, size - 1);
    }
    
    for(index = size - 1; index > 0; index--){
        Swap0(index, 0);
        Swap1(index, 0);
        max_heap(0, index - 1);
    }
}

int main(void) {
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> heap[i][0];
        cin >> heap[i][1];
    }
    
    heap_sort(n);
    
    for(int i=0; i<n; i++){
        cout << heap[i][0] << " ";
        cout << heap[i][1] << "\n";
    }
    return 0;
}

