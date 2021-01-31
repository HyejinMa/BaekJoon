#include <iostream>
using namespace std;

int counting(int arr[], int N, int K) {
	int sum=0, gesu=0;
	for (int i = N - 1; i >= 0; i--) {
		while (sum <= K) {
			sum += arr[i];
			gesu++;
			if (sum > K) {
				sum -= arr[i];
				gesu--;
				break;
			}
		}
	}
	return gesu;
}

void p11047() {
	int N, K;
	cin >> N >> K;

	int arr[10];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int count = counting(arr, N, K);
	cout << count;
}