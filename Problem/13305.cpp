#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 도로 최소비용
void p13305() {
	int N, temp;
	cin >> N;

	vector<int> length;

	for (int i = 0; i < N - 1; i++) {
		cin >> temp;
		length.push_back(temp);
	}

	vector<int> money;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		money.push_back(temp);
	}

	long sum = 0;
	int least = money[0];
	
	for (int i = 0; i < N-1; i++) {
		sum += length[i] * least;
		least = min(least, money[i+1]);
	}

	cout << sum;
}