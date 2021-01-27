#include <iostream>
#include <stack>
using namespace std;

void p3986() {

	int n, count=0;
	cin >> n;
	
	while (n--) {

		stack<char>stack;

		string str;
		cin >> str;

		for (int i = 0; i < str.length(); i++) {			// 입력받은 str stack에 넣기 
			if (!stack.empty() && stack.top() == str[i])
				stack.pop();
			else
				stack.push(str[i]);
		}

		if (stack.empty())
			count++;
	}
	cout << count;
}