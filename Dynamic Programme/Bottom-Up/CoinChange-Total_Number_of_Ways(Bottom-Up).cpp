#include <bits/stdc++.h>
using namespace std;

int countWaysBU(vector<int>& coins, int amount) {
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

    for (int i = 0; i <= n; i++) dp[i][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int amt = 0; amt <= amount; amt++) {
            if (coins[i - 1] <= amt)
                dp[i][amt] = dp[i][amt - coins[i - 1]] + dp[i - 1][amt];
            else
                dp[i][amt] = dp[i - 1][amt];
        }
    }
    return dp[n][amount];
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 5;

    cout << "Total ways (Bottom-Up): " << countWaysBU(coins, amount) << endl;
    return 0;
}
