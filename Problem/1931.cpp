#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {  // 회의가 빨리 끝나는것에 주목해야하니까 second 대상으로 정렬
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}
void p1931() {
	int N,temp1, temp2;
	cin >> N; // 회의의 수

	vector<pair<int,int>> v;
	for (int i = 0; i < N; i++) {
		cin >> temp1 >> temp2;
		v.push_back(make_pair(temp1, temp2));
	}

	sort(v.begin(), v.end(), compare);

	int count=1; // 회의 수 세기
	int temp = v[0].second;

	for (int i = 1; i < N; i++) {
		if (v[i].first >= temp) {
			count++;
			temp = v[i].second;
		}
	}

	cout << count;
}