#include <iostream>
using namespace std;

void p1436(){

	int N, count = 0, shom = 665; // count는 숫자가 666 만족할때 하나씩 올림, shom은 while문에서 숫자 올려지는애
	cin >> N; // 영화의 제목 몇번째?

	// 할 거: 숫자 1씩 올려서 666 연속돼있는지 보기
	// 666 1666 2666 ... 6660 6661 ...6666 .. 6669 7666 ... 
	while (count != N) {
		shom++;
		int check = 0;
		int tmp = shom;

		// 66..66 같은 경우를 생각해보자 
		while (tmp > 0) {
			if (tmp % 10 == 6) check++; // 아니 이게 세번 만족 돼야한다니까? 그럼 우짬 
			else check = 0; // 6 연속 3번 안 나오면 바로 0으로 초기화시켜버리기
			tmp /= 10; // 생성자 문제에서 썼던 방법과 비슷한 방법으로 
			if (check >= 3) {
				count++;
				break; // break를 거는 이유 .. N번째 찾았으니까 카운트 올려주고 바로 반복문 나가줘야 카운트가 여러번 계산 안되겠지? 
			} // 각 자릿수? 자리수에 6이 세번 연속 나왔다면 count 1 올려주기
		}
	}

	cout << shom; 
}
