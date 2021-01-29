#include <iostream>
using namespace std;
// 이 재귀 생각한 사람은 천잰가?
int maxnum, length;
int arr[8];
bool check[8] = { false };

void dfs(int cnt) {

	if (cnt == length) {
		for (int i = 0; i < length; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	/*dfs(0)의 for문에서 첫번째로 올 숫자 결정됨
	각 첫번째로 올 숫자에서 dfs를 cnt == maxNum까지 재귀 호출하게 됨
	이 문제 다시 보게 될 때 꼭 흐름 생각하고 다시 풀어볼 것*/
	for (int i = 1; i <= maxnum; i++) { // 수열에 들어갈 숫자는 1~maxnum
		if (!check[i]) { // check가 false 라면, 방문하지 않았다면
			check[i] = true; 
			arr[cnt] = i; 
			dfs(cnt + 1); // 재귀 호출하여 새로운 공간에서 for 실행하거나 함 
			check[i] = false; // 재귀 호출 하고 나서 dfs가 cnt==length 만나면 다시 일로 복귀하여 얘 실행
		}
	}
}

void p15649() {

	cin >> maxnum >> length;
	dfs(0);
}