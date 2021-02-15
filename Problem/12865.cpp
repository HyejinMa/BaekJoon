#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void p12865() {
	int N, K; // N은 물품의 수, K는 버틸 수 있는 무게
	cin >> N >> K;

	int weight, value;
	vector<pair<int,int>> things;
	for (int i = 0; i < N; i++) {
		cin >> weight >> value;
		things.push_back(make_pair(weight, value));
	}

	int total_weight = 0, sum=0, result=0;
	for (int i = 1; i < N; i++) {
		total_weight = things[i].first;
		for (int j = 0; j < i; j++) {
			total_weight += things[j].first;
			if (total_weight < N) {
				sum += things[j].second;
			}
		}
		result = max(result, sum);
	}

	cout << result;
	
}