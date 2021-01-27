#include <iostream>
using namespace std;

int temp;

void BubbleSort(int count, int *arr) {
	for (int i = 0; i < count - 1; i++) {
		for (int j = 1; j < count - i; j++) {
			if (arr[j - 1] < arr[j]) {
				temp = arr[j-1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < count; i++)
		cout << arr[i];
}

void p1427() {

	int N, i=0, arr[10], count=0, tmp; // 입력할 수
	cin >> N; 

	while (N>0) {
		if (i == 0) arr[0] = N % 10;
		else {
			N /= 10;
			if (N == 0) break;
			arr[i] = N % 10;
		}
		i++;
		count++;
	}

	BubbleSort(count, arr);
}