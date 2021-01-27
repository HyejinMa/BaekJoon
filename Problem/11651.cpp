#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct jwapyo {
	int x;
	int y;
};

bool comp(jwapyo a, jwapyo b) {
	if (a.y == b.y) {
		return a.x < b.x;
	}
	return a.y < b.y;

}

void p11651() {

	int N;
	cin >> N;

	vector<jwapyo> v(N);

	for (int i = 0; i < N; i++)
		cin >> v[i].x >> v[i].y;

	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < N; i++)
		cout << v[i].x << " " << v[i].y << "\n";
}