#include <bits/stdc++.h>
using namespace std;

int countWays(int i, int amount, vector<int>& coins, vector<vector<int>>& dp) {
    if (amount == 0) return 1;
    if (i >= coins.size() || amount < 0) return 0;

    if (dp[i][amount] != -1) return dp[i][amount];

    int include = countWays(i, amount - coins[i], coins, dp);
    int exclude = countWays(i + 1, amount, coins, dp);

    return dp[i][amount] = include + exclude;
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 5;
    vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));

    cout << "Total ways (Top-Down): " << countWays(0, amount, coins, dp) << endl;
    return 0;
}
