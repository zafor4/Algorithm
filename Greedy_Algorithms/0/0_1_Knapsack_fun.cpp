#include <bits/stdc++.h>
using namespace std;

int knapsack(int prices[], int weights[], int nump, int capacity) {
  int dp[capacity + 1];
  for (int i = 0; i <= capacity; i++) {
    dp[i] = 0;
  }
  for (int i = 1; i <= nump; i++) {
    for (int j = capacity; j >= weights[i - 1]; j--) {
      dp[j] = max(dp[j], dp[j - weights[i - 1]] + prices[i - 1]);
    }
  }
  return dp[capacity];
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int nump;
    cin >> nump;
    int prices[nump];
    int weights[nump];
    for (int i = 0; i < nump; i++) {
      cin >> prices[i] >> weights[i];
    }
    int person;
    cin >> person;
    int capacity[person];
    for (int i = 0; i < person; i++) {
      cin >> capacity[i];
    }
    int total_profit = 0;
    for (int i = 0; i < person; i++) {
      total_profit += knapsack(prices, weights, nump, capacity[i]);
    }
    cout << total_profit << endl;
  }

  return 0;
}
