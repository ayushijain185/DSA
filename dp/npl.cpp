#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int numWaysToTransform(string src, string target, int k) {
    int m = src.length();
    int n = target.length();

    vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n + 1, vector<int>(k + 1, 0)));

    // Initialize DP array
    dp[0][0][0] = 1;

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int steps = 0; steps <= k; ++steps) {
                // Case 1: Skip the current character in src
                if (i > 0) {
                    dp[i][j][steps] += dp[i - 1][j][steps];
                    dp[i][j][steps] %= MOD;
                }

                // Case 2: Match the current character in src and target
                if (i > 0 && j > 0 && src[i - 1] == target[j - 1]) {
                    dp[i][j][steps] += dp[i - 1][j - 1][steps];
                    dp[i][j][steps] %= MOD;
                }

                // Case 3: Use a step to move to the next character in target
                if (steps > 0 && j > 0) {
                    dp[i][j][steps] += dp[i][j - 1][steps - 1];
                    dp[i][j][steps] %= MOD;
                }
            }
        }
    }

    return dp[m][n][k];
}

int main() {
    string src = "abcd";
    string target = "cdab";
    int k = 2;
    int result = numWaysToTransform(src, target, k);
    cout << result << endl; // Output: 1

    return 0;
}
