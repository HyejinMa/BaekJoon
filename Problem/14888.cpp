#include <iostream>
using namespace std;

int number; // 개수
int arr[100]; // 계산될 수 
int _plus, _minus, multiply, divide; // 각 연산 개수

int maxnum = -1000000000;
int minnum = 1000000000;

void working(int cnt, int temp) { // temp는 순차적으로 계산할때 중간값 재귀 호출 중간값 반환하는 것 때문에 넣어줌

	if (cnt == number) {
		if (temp > maxnum) maxnum = temp;
		if (temp < minnum) minnum = temp;
	}
	else {
		// 각각 dfs 실행 else if ㄴㄴ 
		if (_plus > 0) {// +
			_plus--;
			working(cnt + 1, temp + arr[cnt]);
			_plus++;
		}
		if (_minus > 0) {// -
			_minus--;
			working(cnt + 1, temp - arr[cnt]);
			_minus++;
		}
		if (multiply > 0) {
			multiply--;
			working(cnt + 1, temp * arr[cnt]);
			multiply++;
		}
		if (divide > 0) {
			divide--;
			working(cnt + 1, temp / arr[cnt]);
			divide++;
		}
	}
}

void p14888() {

	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}

	cin >> _plus >> _minus >> multiply >> divide;

	working(1, arr[0]);
	cout << maxnum << "\n" << minnum;
}