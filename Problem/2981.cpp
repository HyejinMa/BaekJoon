/*
#include <iostream>
#include <algorithm>
using namespace std;
// 나중에 꼭 다시 풀어보기

int arr[100]; // 입력받는 배열
int ans[100]; // 최대공약수의 약수를 구하는 배열
int gcd(int a, int b) { // 유클리드 호제법
	return a % b ? gcd(b, a % b) : b;
}
int main() {
	//입력받기
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n); // 오름차순 정렬
	//최대공약수 구하기, arr[i]-arr[i-1] = M * (arr[i]/M - arr[i-1]/M)
	int sub = arr[1] - arr[0];
	for (int i = 2; i < n; i++) sub = gcd(sub, arr[i] - arr[i - 1]);
	//최대공약수의 약수 구하기
	int count = 0;
	for (int i = 1; i * i <= sub; i++) {
		if (sub % i == 0) {
			ans[count++] = i;
			if (i != sub / i) ans[count++] = sub / i; // 중복 빼기
		}
	}
	sort(ans, ans + count);
	//출력
	for (int i = 0; i < count; i++) {
		if (ans[i] != 1) cout << ans[i] << " ";
	}
}
*/