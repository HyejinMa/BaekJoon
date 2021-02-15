#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void p13305() {
	long long N;
	cin >> N;

	vector<long long> length(N-1);

	for (int i = 0; i < N - 1; i++) 
		cin >> length[i];

	vector<long long> money(N);
	for (int i = 0; i < N; i++) 
		cin >> money[i];

	long long sum = 0;

	long long least = money[0];
	for (int i = 0; i < N - 1; i++) {
		sum += length[i] * least;
		least = min(least, money[i + 1]);
	}

	cout << sum;
}