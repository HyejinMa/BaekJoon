#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {  // ȸ�ǰ� ���� �����°Ϳ� �ָ��ؾ��ϴϱ� second ������� ����
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}
void p1931() {
	int N,temp1, temp2;
	cin >> N; // ȸ���� ��

	vector<pair<int,int>> v;
	for (int i = 0; i < N; i++) {
		cin >> temp1 >> temp2;
		v.push_back(make_pair(temp1, temp2));
	}

	sort(v.begin(), v.end(), compare);

	int count=1; // ȸ�� �� ����
	int temp = v[0].second;

	for (int i = 1; i < N; i++) {
		if (v[i].first >= temp) {
			count++;
			temp = v[i].second;
		}
	}

	cout << count;
}