#include <iostream>
using namespace std;

void check(char first, int N, int M, char input[50][50]) {
	char next = { first == 'B' ? 'W' : 'B' };
	int count[50][50];

	for (int i = 0; i < 50; i++)
		for (int j = 0; j < 50; j++)
			count[i][j] = 0;

	for (int t = 0; t < N; t++) {
		for (int i = t; i < t + 8; i++) {
			for (int j = t; j < t + 8; j++) {
				if ((i + j) % 2 == 0) {
					if (first != input[i][j])
						count[i][j]++;
				}
				else {
					if (next != input[i][j])
						count[i][j]++;
				}
			}
		}
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M ; j++)
			cout << count[i][j] << "\n";

	int least = count[0][0];
	for (int t = 0; t < N - 7; t++) {
		for (int j = 0; j + 1 < M - 7; j++) {
			int tmp = least;
			if (tmp < count[t][j + 1])
				least = tmp;
			else least = count[t][j + 1];
		}
	}

	cout << least;
}

void p1018() {

	int N, M; // N*M 
	cin >> N >> M;

	char input[50][50];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> input[i][j];
		}
	}

	check(input[0][0], N, M, input);
}