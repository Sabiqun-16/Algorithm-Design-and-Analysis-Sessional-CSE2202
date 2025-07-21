#include <bits/stdc++.h>
using namespace std;

const int MAX_COINS = 100;
const int MAX_AMOUNT = 1000;

int dp[MAX_COINS][MAX_AMOUNT];
int coins[MAX_COINS];

int countWays(int i, int amount, int n) {
    if (amount == 0) return 1;
    if (i >= n || amount < 0) return 0;

    if (dp[i][amount] != -1) return dp[i][amount];

    int include = countWays(i, amount - coins[i], n);
    int exclude = countWays(i + 1, amount, n);

    return dp[i][amount] = include + exclude;
}

int main() {
    int n = 3;
    coins[0] = 1; coins[1] = 2; coins[2] = 5;
    int amount = 5;

    memset(dp, -1, sizeof(dp));
    cout << "Total ways (Top-Down): " << countWays(0, amount, n) << endl;
    return 0;
}

