#include <bits/stdc++.h>  
using namespace std; 
// int dp[sum] = { 0 }; 
int minCoins(int coins[],int N, int M) 
{  
    int dp[N+1] = { 0 }; 
    for (int i = 0; i <= N; i++)  
        dp[i] = INT_MAX; 
    dp[0] = 0;
    for (int i = 1; i <= N; i++) {  
        for (int j = 0; j < M; j++) {  
            if (coins[j] <= i) {  
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);  
            }  
        }  
    }  
    return dp[N];  
}  
int main()  
{  
    int sum = 5;  
    int total_coins = 3; 
    int coins[] = { 1, 2, 3 }; 
    cout << "Minimum coins needed are " << minCoins(coins,sum, total_coins);  
}  