#include <iostream>
using namespace std;

int heap[10001];

void Swap(int a, int b){
    int temp = heap[a];
    heap[a] = heap[b];
    heap[b] = temp;
}

void max_heap(int root, int bottom){
    int max_child;
    int leftChild = root * 2 + 1;
    int rightChild = root * 2 + 2;
    
    if(leftChild <= bottom){
        
        // 자식 노드가 한 개인 경우
        if(leftChild == bottom){
            max_child = leftChild;
        }
        
        // 자식 노드가 두 개인 경우
        else {
            if(heap[leftChild] > heap[rightChild])
                max_child = leftChild;
            else
                max_child = rightChild;
        }
        
        if(heap[max_child] > heap[root] ){
            Swap(max_child, root);
            max_heap(max_child, bottom);
        }
    }
    
}

void heap_sort(int size) {
    
    int index;
    
    for(index = size / 2 - 1; index >= 0; index--){
        max_heap(index, size-1);
    }
    
    for (index = size - 1; index >= 0; index--) // 이진탐색트리x.'이진트리', left, right 정렬x.
    {
        Swap(0, index); //0(root)가 최대값.
        max_heap(0, index - 1); //다시 heap화.
    }
}

int main(void) {
    
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    scanf("%d", &heap[i]);
    
    heap_sort(n);

    int sum = 0;
    
    //오름차순
    for (int j = 0; j < n; j++){
        for (int i = 0; i <= j; i++){
            sum += heap[i];
        }
    }
    printf("%d\n",sum);
    
    //내림차순
    /*
    for (int i = n - 1; i >= 0; i--)
    printf("%d\n", heap[i]);
    */
    return 0;
}
