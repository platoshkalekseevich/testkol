#include <iostream>

int main() {
    int m, n;
    std::cin >> n >> m;
    if (n == 0 || m == 0)
        std::cout << 0;
    else {
        int dp[m];
        int value;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> value;
                if (j == 0) {
                    if (i == 0)
                        dp[j] = value;
                    else
                        dp[j] = dp[j] + value;
                } else {
                    if (i == 0)
                        dp[j] = value;
                    else
                        dp[j] = value + std::max(dp[j], dp[j - 1]);
                }
            }
        }
        std::cout << dp[n-1];
    }
    return 0;
}
