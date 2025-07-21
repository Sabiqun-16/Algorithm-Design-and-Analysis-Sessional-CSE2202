#include <bits/stdc++.h>
using namespace std;

const int MAX_AMOUNT = 1000;
const int MAX_COINS = 100;

int coins[MAX_COINS];
int dp[MAX_AMOUNT + 1];

int minCoinsBU(int n, int amount) {
    for (int i = 0; i <= amount; i++)
        dp[i] = INT_MAX;
    dp[0] = 0;

    for (int amt = 1; amt <= amount; amt++) {
        for (int i = 0; i < n; i++) {
            if (coins[i] <= amt && dp[amt - coins[i]] != INT_MAX)
                dp[amt] = min(dp[amt], 1 + dp[amt - coins[i]]);
        }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main() {
    int n = 3;
    coins[0] = 1; coins[1] = 2; coins[2] = 5;
    int amount = 11;

    cout << "Min coins (Bottom-Up): " << minCoinsBU(n, amount) << endl;
    return 0;
}

