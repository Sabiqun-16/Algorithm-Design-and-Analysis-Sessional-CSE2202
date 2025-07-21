#include <bits/stdc++.h>
using namespace std;

int minCoins(int amount, vector<int>& coins, vector<int>& dp) {
    if (amount == 0) return 0;
    if (amount < 0) return INT_MAX;

    if (dp[amount] != -1) return dp[amount];

    int ans = INT_MAX;
    for (int coin : coins) {
        int res = minCoins(amount - coin, coins, dp);
        if (res != INT_MAX)
            ans = min(ans, 1 + res);
    }

    return dp[amount] = ans;
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    vector<int> dp(amount + 1, -1);

    int result = minCoins(amount, coins, dp);
    cout << "Min coins (Top-Down): " << (result == INT_MAX ? -1 : result) << endl;
    return 0;
}
