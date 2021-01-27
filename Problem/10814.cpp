#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct online {
	int age;
	int order;
	string name;
};

bool compare(online a, online b) {
	if (a.age < b.age)
		return true;
	else if (a.age == b.age)
		return a.order < b.order;
	else
		return false;
}

void p10814() {

	int N;
	cin >> N;

	vector<online> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].age >> v[i].name;
		v[i].order = i;
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
		cout << v[i].age << " " << v[i].name << "\n";

}