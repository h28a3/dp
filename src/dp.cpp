#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 3;
    int s = 11;
    int a[3] = { 2,5,9 };
    bool dp[n][s + 1];
    for (int j = 0;j < s + 1;j++) {
        dp[0][j] = false;
    }
    dp[0][0] = true;
    dp[0][a[0]] = true;
    for (int i = 1;i < n;i++) {
        for (int j = 0;j < s + 1;j++) {
            dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i]];
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 1;j < s + 1;j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}