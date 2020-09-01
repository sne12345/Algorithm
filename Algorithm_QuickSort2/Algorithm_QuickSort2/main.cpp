#include <iostream>
using namespace std;

void quicksort(int low, int high, int s[]);
void partition(int low, int high, int& pivotpoint, int s[]);

int main() {
    int s[50]={0};
    int low, high;
    int i, n;
    
    cout << "입력할 개수? (0~50)" << endl;
    cin >> n;
    
    while(n<0 || n>50){ // 적당한 값이 나올때 까지 반복
        cout << "재입력"<<endl;
        cin >> n;
    }
    
    for(i=0; i<n; i++) // 정렬할 값 입력
        cin >> s[i];
    
    low = 0;
    high = n-1;
    
//    for(i=0; i<n; i++){ // 입력된 값 출력
//        cout << s[i] << " "; }
    
    quicksort(low, high, s);
    
//    cout << endl;
    
    for(i=0; i<n; i++){ // 정렬된 입력된 출력
        cout << s[i] << " "; }
    
    return 0;
}

void quicksort(int low, int high, int s[]) {
    int pivotpoint;
    
    if(high > low){
        partition(low, high, pivotpoint, s);
        quicksort(low, pivotpoint-1, s); // 정렬되지 않은 배열을 나눠서 재호출한다.
        quicksort(pivotpoint+1, high, s);
    }
}
void partition(int low, int high, int& pivotpoint, int s[]){
    int i, j;
    int temp;
    int pivotitem;
    
    pivotitem = s[low];
    
    i=low;
    
    for(j=low+1; j<=high; j++){
        if(s[j]<pivotitem){ // pibot값과 [j]값 비교하여 [i]값과 서로 교환한다.
            i++;
            temp=s[j];
            s[j]=s[i];
            s[i]=temp;
        }
    }
    pivotpoint=i; // pibot값과 [i]값을 바꾼후 [i]에 있는 값을 pibot을 값을 선택 한다.
    
    temp=s[low];
    s[low]=s[pivotpoint];
    s[pivotpoint]=temp;
}
