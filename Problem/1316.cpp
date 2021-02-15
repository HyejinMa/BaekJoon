#include <iostream>
#include <string>
using namespace std;

// 그룹 단어 체커
void p1316(){
	int N;
	string str;
	cin >> N; // 단어의 개수

	int count = N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int k = 0; k < str.length(); k++) {
			if (str[k] != str[k + 1]) {
				for (int j = k + 1; j < str.length();j++) {
					if (str[j] == str[k]) {
						count--;
						goto twobreak;
					}
				}
			}
		}
	twobreak:;
	}
	
	cout << count;

}