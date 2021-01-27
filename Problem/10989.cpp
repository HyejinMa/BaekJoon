#include <iostream>
#include <array>
using namespace std;

void Print(array<int, 10001>& arr) // input 된 수만큼 print하는 함수.
{
    for (int i = 0; i < 10001; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = 0; j < arr[i]; j++) { cout << i << '\n'; }
        }
    }
}

void p10989() {
    std::ios_base::sync_with_stdio(false); // cin cout에 걸리는 시간을 줄여줌
    int num, input;
    array<int, 10001> NUM;
    NUM.fill(0); // 배열 0으로 초기화
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> input;
        NUM[input]++; //input을 받을 때마다 1씩 늘려줌
    }
    Print(NUM);
}