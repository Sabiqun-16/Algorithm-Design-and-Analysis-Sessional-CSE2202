#include <bits/stdc++.h>
using namespace std;

const int MAX_AMOUNT = 1000;
const int MAX_COINS = 100;

int coins[MAX_COINS];
int dp[MAX_AMOUNT + 1];

int minCoins(int amount, int n) {
    if (amount == 0) return 0;
    if (amount < 0) return INT_MAX;

    if (dp[amount] != -1) return dp[amount];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int res = minCoins(amount - coins[i], n);
        if (res != INT_MAX)
            ans = min(ans, 1 + res);
    }

    return dp[amount] = ans;
}

int main() {
    int n = 3;
    coins[0] = 1; coins[1] = 2; coins[2] = 5;
    int amount = 11;

    memset(dp, -1, sizeof(dp));
    int result = minCoins(amount, n);

    cout << "Min coins (Top-Down): " << (result == INT_MAX ? -1 : result) << endl;
    return 0;
}

