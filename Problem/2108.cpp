#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

float average(vector<int> arrr, int N) {
	float sum=0;
	for (int i = 0; i < N; i++) {
		sum += arrr[i];
	}
	return sum / N;
}

int many(vector<int> arrr, int N) {
	int plus_value[4001] = { 0 }, minus_value[4001] = { 0 };
	for (int i = 0; i < N; i++) {
		if (arrr[i] > 0)
			plus_value[arrr[i]]++;
		else
			minus_value[-arrr[i]]++;
	}
	int n = 0, m=0, index=0, c[8002];
	// 한 배열이 끝날 때까지 비교해주며 작은 값부터 채워주기
	while (n < 4001 && m < 4001) {
		if (plus_value[n] <= minus_value[m])
			c[index++] = plus_value[n++];
		else
			c[index++] = minus_value[m++];
	}
	// 남은 배열의 뒷 부분 추가
	while (n < 4001) c[index++] = plus_value[n++];
	while (m < 4001) c[index++] = minus_value[m++];

	if (c[8001] == c[8000]) {
		int temp=0, i=0, check=0;
		while(check != 2){
			if (c[i] > temp) {
				temp = c[i];
				check++;
			}
			i++;
		}
		return temp;
	}
	else
		return c[8000];

}

void p2108() {
	int N, temp;
	cin >> N; // 수의 개수 입력받음

	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		arr.push_back(temp);
	}

	float ofaverage = average(arr, N);
	cout << round(ofaverage) << "\n";

	sort(arr.begin(), arr.end());
	int result2 = N != 1 ? arr[N / 2 ] : arr[0];
	cout << result2 << "\n";

	int result3 = N != 1 ? many(arr, N) : arr[0];
	cout << result3 << "\n";

	int result4 = N != 1 ? arr[N - 1] - arr[0] : 0;
	cout << result4;

}