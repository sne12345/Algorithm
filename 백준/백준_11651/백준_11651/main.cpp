#include <iostream>
#include <algorithm>
using namespace std;

int heap1[100001], heap2[100001];

void Swap(int a, int b){
    int temp = heap1[a];
    heap1[a] = heap1[b];
    heap1[b] = temp;
}

void heap2_Swap(int a, int b){
    int temp = heap2[a];
    heap2[a] = heap2[b];
    heap2[b] = temp;
}

void max_heap1(int root, int bottom){
    int max_child;
    int left_child = root * 2 + 1;
    int right_child = root * 2 + 2;
    
    if(left_child <= bottom){
        if(left_child == bottom)
            max_child = left_child;
        else {
            if(heap1[left_child] >= heap1[right_child])
                max_child = left_child;
            else
                max_child = right_child;
        }
        
        if(heap1[max_child] > heap1[root]){
            Swap(max_child, root);
            heap2_Swap(max_child, root);
            max_heap1(max_child, bottom);
        }
    }
}

void heap1_sort(int size){
    int index;
    
    for(index = size / 2 - 1; index >= 0; index--){
        max_heap1(index, size - 1);
    }
    
    for(index = size - 1; index > 0; index--){
        Swap(index, 0);
        heap2_Swap(index, 0);
        max_heap1(0, index - 1);
    }
}

int main(void) {
    int n, count = 1;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> heap2[i];
        cin >> heap1[i];
    }
    
    heap1_sort(n);
    
    for(int i=0; i<n; i++){
        if(heap1[i] == heap1[i+1] && (i != n-1)){
            count++;
        }
        else if (count > 1){
            sort(heap2 + i + 1 - count, heap2 + i + 1);
            count = 1;
        }
    }
    
    for(int i=0; i<n; i++){
        cout << heap2[i] << " ";
        cout << heap1[i] << "\n";
    }
    return 0;
}

