#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 998244353;

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    long long sum = 0;
    long long maxPow = 1;

    for (int i = n - 1; i >= 0; i--) {
        long long minPow = 1;
        for (int j = 0; j < n - i - 1; j++) {
            minPow = (minPow * a[i]) % MOD;
        }

        sum = (sum + maxPow * minPow) % MOD;
        maxPow = (maxPow * a[i]) % MOD;
    }

    std::cout << sum << std::endl;

    return 0;
}
