/*
#include <iostream>
using namespace std;

#define max_nk 1001

int dp[max_nk][max_nk];

int main() {
	int N, K;
	cin >> N >> K;

	for (int row = 1; row <= N; row++) {
		for (int col = 0; col <= N; col++) {
			if (col == 0 || row == col) {
				dp[row][col] = 1;
				continue;
			}
			else if (col == 1 || col == row - 1)
				dp[row][col] = row;
			else
				dp[row][col] = (dp[row - 1][col - 1] + dp[row - 1][col])%10007;
		}
	}

	cout << dp[N][K];

}
*/