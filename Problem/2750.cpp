#include <iostream>
#include<cstdlib>
using namespace std;

void p2750() {

	int N, index, minus[1002], plus[1002]; 
	cin >> N; // 넣을 문자의 수 입력

	for (int i = 0; i < 1002; i++) {
		minus[i] = 0;
		plus[i] = 0;
	}

	for (int i = 0; i < N; i++) { // 딱 N번 돌릴거임
		cin >> index; // N번째 값 넣을거임

		if (index < 0)
			minus[abs(index)] = 1; // 음수를 양수로 바꾸는 방법 *-1 해주기 ?,,,,
		else
			plus[index] = 1;
	}
	 
	for(int i=1001; i>0; i--){
		if (minus[i] == 1)
			cout << i * -1 << "\n";
	}

	for (int i = 0; i < 1001; i++) {
		if (plus[i] == 1)
			cout << i << "\n";
	}
}
