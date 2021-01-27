#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length())
		return a<b;
	else 
		return a.length()<b.length();
}

void p1181() {

	int N;
	string temp;
	cin >> N;

	vector<string> v;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		v.push_back(temp);
	} 

	sort(v.begin(), v.end(), compare);
	
	string tmp;
	for(int i=0; i < N;i++){
		if (tmp == v[i]) continue;
		cout << v[i] << "\n";
		tmp = v[i];
	}

}