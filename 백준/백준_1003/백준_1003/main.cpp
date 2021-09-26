#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long int> dp(41);

long long int Fivonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(dp[n] != -1)
        return dp[n];
    
    dp[n] = Fivonacci(n-1) + Fivonacci(n-2);
    return dp[n];
}

int main(void) {
    
    int total;
    scanf("%d",&total);
    
    fill(dp.begin(),dp.end(),-1);
    
    for(int i=0; i<total; i++){
        int N;
        scanf("%d", &N);
        
        if(N == 0)
            printf("%d %d\n", 1, 0);
        else
            printf("%lld %lld\n", Fivonacci(N-1), Fivonacci(N));
    }
    return 0;
}
