#include<bits/stdc++.h>
using namespace std;

int coinRowRecursive(const vector<int>& coins, int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return coins[0];

    int include_coin = coins[n - 1] + coinRowRecursive(coins, n - 2);
    int exclude_coin = coinRowRecursive(coins, n - 1);

    return max(include_coin, exclude_coin);
}

int main() {
    vector<int> coins = {5, 1, 2, 10, 6, 2};
    int n = coins.size();
    int max_amount = coinRowRecursive(coins, n);
    cout << "Maximum amount that can be collected: " << max_amount << endl;
    return 0;
}

