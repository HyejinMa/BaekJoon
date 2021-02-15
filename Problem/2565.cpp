#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void p2565() { 
	int N;
	cin >> N;

	int dp[101] = { 1 };

	int numA, numB;
	vector<pair<int, int>> elec_flex;
	for (int i = 0; i < N; i++) {
		cin >> numA >> numB;
		elec_flex.push_back(pair<int, int>(numA, numB));
	}

	sort(elec_flex.begin(), elec_flex.end());
	
	int result=0;
	dp[0] = 1;
	for (int i = 1; i < N; i++) {
		for (int k = 0; k < i; k++) {
			if (elec_flex[i].second > elec_flex[k].second) {
				if (dp[i] <= dp[k]) {
					dp[i] = dp[k] + 1;
					//cout << dp[i] << " " << dp[k] << "\n";
				}
			}
		}
		result = max(result, dp[i]);
		//cout << "------------------"<< "(" << i << ")" <<"\n";
	}
	/*
	for (int i = 0; i < N; i++) {
		cout << dp[i] << "\n";
	}*/

	cout << N-result;

}