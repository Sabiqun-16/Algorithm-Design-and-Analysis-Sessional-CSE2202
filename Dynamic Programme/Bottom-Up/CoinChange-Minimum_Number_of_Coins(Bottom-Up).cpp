#include <bits/stdc++.h>
using namespace std;

int minCoinsBU(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int amt = 1; amt <= amount; amt++) {
        for (int coin : coins) {
            if (coin <= amt && dp[amt - coin] != INT_MAX)
                dp[amt] = min(dp[amt], 1 + dp[amt - coin]);
        }
    }
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;

    cout << "Min coins (Bottom-Up): " << minCoinsBU(coins, amount) << endl;
    return 0;
}
