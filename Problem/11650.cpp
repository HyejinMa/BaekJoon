#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct jwapyo {
	int x;
	int y;
};

bool compare(jwapyo a, jwapyo b) {
	if (a.x == b.x)
		return a.y < b.y;
	else
		return a.x < b.x;
}

void p11650() {

	int N;
	cin >> N;

	vector<jwapyo> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].x >> v[i].y;
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].x << " " << v[i].y << "\n";
	}

}