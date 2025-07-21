#include <bits/stdc++.h>
using namespace std;

const int MAX_COINS = 100;
const int MAX_AMOUNT = 1000;

int dp[MAX_COINS + 1][MAX_AMOUNT + 1];
int coins[MAX_COINS];

int countWaysBU(int n, int amount) {
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

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
    int n = 3;
    coins[0] = 1; coins[1] = 2; coins[2] = 5;
    int amount = 5;

    cout << "Total ways (Bottom-Up): " << countWaysBU(n, amount) << endl;
    return 0;
}

