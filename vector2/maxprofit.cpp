#include <iostream>
#include <vector>

using namespace std;

int maxBalancedProfit(vector<int>& stockPrice) {
    int n = stockPrice.size();
    if (n < 3) {
        return 0; // Not enough days to form a balanced subsequence
    }

    vector<int> maxProfitFromLeft(n);
    vector<int> maxProfitFromRight(n);

    // Calculate maximum profit from left to right
    int minPrice = stockPrice[0];
    maxProfitFromLeft[0] = 0;

    for (int i = 1; i < n; ++i) {
        minPrice = min(minPrice, stockPrice[i]);
        maxProfitFromLeft[i] = max(maxProfitFromLeft[i - 1], stockPrice[i] - minPrice);
    }

    // Calculate maximum profit from right to left
    int maxPrice = stockPrice[n - 1];
    maxProfitFromRight[n - 1] = 0;

    for (int i = n - 2; i >= 0; --i) {
        maxPrice = max(maxPrice, stockPrice[i]);
        maxProfitFromRight[i] = max(maxProfitFromRight[i + 1], maxPrice - stockPrice[i]);
    }

    // Find the maximum balanced profit by considering each possible split point
    int maxBalanced = 0;

    for (int i = 1; i < n - 1; ++i) {
        maxBalanced = max(maxBalanced, maxProfitFromLeft[i] + maxProfitFromRight[i + 1]);
    }

    return maxBalanced;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    vector<int> stockPrice(n);

    cout << "Enter the stock prices for " << n << " days: ";
    for (int i = 0; i < n; ++i) {
        cin >> stockPrice[i];
    }

    int maxProfit = maxBalancedProfit(stockPrice);
    cout << "Maximum balanced profit: " << maxProfit << endl;

    return 0;
}
