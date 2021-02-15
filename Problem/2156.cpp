#include <iostream>
#include <vector>
using namespace std;

int compare(int a, int b, int c) {
	int tmp = a > b ? a : b;
	return tmp > c ? tmp : c;
}

void p2156() {
	int n;
	cin >> n;

	vector<int> podojoo(n+1);
	for (int i = 1; i < n+1; i++)
		cin >> podojoo[i];

	vector<int> total(n+1);
	total[0] = 0;
	total[1] = podojoo[1];
	total[2] = podojoo[2] + podojoo[1];

	for (int i = 3; i <= n; i++) {
		total[i]=compare(total[i - 1], total[i - 2] + podojoo[i], total[i-3]+podojoo[i - 1] + podojoo[i]);
	}

	cout << total[n];
}