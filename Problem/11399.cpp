#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void p11399() {

	int N, temp;
	cin >> N;

	vector<int> minute;

	for (int k = 0; k < N; k++) {
		cin >> temp;
		minute.push_back(temp);
	}

	sort(minute.begin(), minute.end());

	int tmp=0, sum=0;
	vector<int> plusing;
	for (int k = 0; k < N; k++) {
		tmp +=minute[k] ;
		plusing.push_back(tmp);
		sum += plusing[k];
	}

	cout << sum;
}