#include <bits/stdc++.h>
  
using namespace std;
  
// Returns total distinct ways to make sum using n coins of
// different denominations
int count(vector<int>& coins, int n, int sum)
{
    // 2d dp array where n is the number of coin
    // denominations and sum is the target sum
    vector<vector<int> > dp(n + 1, vector<int>(sum + 1, 0));
  
    // Represents the base case where the target sum is 0,
    // and there is only one way to make change: by not
    // selecting any coin
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
  
            // Add the number of ways to make change without
            // using the current coin,
            dp[i][j] += dp[i - 1][j];
  
            if ((j - coins[i - 1]) >= 0) {
  
                // Add the number of ways to make change
                // using the current coin
                dp[i][j] += dp[i][j - coins[i - 1]];
            }
        }
    }
    return dp[n][sum];
}
  
// Driver Code
int main()
{
    vector<int> coins{ 1, 2, 3 };
    int n = 3;
    int sum = 5;
    cout << count(coins, n, sum);
    return 0;
}