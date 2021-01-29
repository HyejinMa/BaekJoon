#include <iostream>
using namespace std;
// �� ��� ������ ����� õ�鰡?
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

	/*dfs(0)�� for������ ù��°�� �� ���� ������
	�� ù��°�� �� ���ڿ��� dfs�� cnt == maxNum���� ��� ȣ���ϰ� ��
	�� ���� �ٽ� ���� �� �� �� �帧 �����ϰ� �ٽ� Ǯ� ��*/
	for (int i = 1; i <= maxnum; i++) { // ������ �� ���ڴ� 1~maxnum
		if (!check[i]) { // check�� false ���, �湮���� �ʾҴٸ�
			check[i] = true; 
			arr[cnt] = i; 
			dfs(cnt + 1); // ��� ȣ���Ͽ� ���ο� �������� for �����ϰų� �� 
			check[i] = false; // ��� ȣ�� �ϰ� ���� dfs�� cnt==length ������ �ٽ� �Ϸ� �����Ͽ� �� ����
		}
	}
}

void p15649() {

	cin >> maxnum >> length;
	dfs(0);
}