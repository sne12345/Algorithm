#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

vector<long long int> dp;

long long int Fivonacci(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(dp[n] != -1)
        return dp[n];
    
    dp[n] = Fivonacci(n-1) + Fivonacci(n-2);
    return dp[n];
}

int main(void) {
    int N;
    scanf("%d", &N);
    
    dp.resize(N+1, -1);
    
    printf("%lld\n", Fivonacci(N));
    return 0;
}
