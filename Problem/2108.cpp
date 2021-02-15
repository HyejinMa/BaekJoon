/*#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int N, maxVisit = 0, maxV_index = 0, result;
int visit[8001] = { 0 };
double sum = 0;

int mode(vector<int>arr) {

	// 배열원소를 크기순으로 오름차순 해버리면 인덱스가 뒤죽박죽되겠지 그니까 글케 하면 안됨
	bool notfirst = false;
	for (int i = 0; i < 8001; i++) {
		if (visit[i] == 0)
			continue;
		if (visit[i] == maxVisit && notfirst) {
			result = i - 4000;
			notfirst = false;
		}
		if (visit[i] > maxVisit) {
			maxVisit = visit[i];
			result = i - 4000;
			notfirst = true;
		}
	}

	return result;
}

int main() {

	cin >> N; // 수의 개수 
	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum += arr[i];
		visit[arr[i] + 4000]++;
	}

	sort(arr.begin(), arr.end());

	cout << round(sum / N) << "\n";
	cout << arr[N / 2] << "\n";
	cout << mode(arr) << "\n";
	cout << arr[N - 1] - arr[0];
}*/