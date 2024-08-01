#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[101];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<int> dp(n, 1); // 初始化 dp 陣列，大小為 n，每個元素初始值為 1

    for (int i = 1; i < n; i++) { // 保持在前位
        for (int j = 0; j < i; j++) { // 保持在後位
            if (A[i] > A[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    sort(dp.begin(), dp.end()); // 排序 dp 陣列
    cout << dp[n-1];

    return 0;
}
