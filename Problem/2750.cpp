#include <iostream>
#include<cstdlib>
using namespace std;

void p2750() {

	int N, index, minus[1002], plus[1002]; 
	cin >> N; // ���� ������ �� �Է�

	for (int i = 0; i < 1002; i++) {
		minus[i] = 0;
		plus[i] = 0;
	}

	for (int i = 0; i < N; i++) { // �� N�� ��������
		cin >> index; // N��° �� ��������

		if (index < 0)
			minus[abs(index)] = 1; // ������ ����� �ٲٴ� ��� *-1 ���ֱ� ?,,,,
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
