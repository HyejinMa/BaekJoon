#include <iostream>
#include <array>
using namespace std;

void Print(array<int, 10001>& arr) // input �� ����ŭ print�ϴ� �Լ�.
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
    std::ios_base::sync_with_stdio(false); // cin cout�� �ɸ��� �ð��� �ٿ���
    int num, input;
    array<int, 10001> NUM;
    NUM.fill(0); // �迭 0���� �ʱ�ȭ
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> input;
        NUM[input]++; //input�� ���� ������ 1�� �÷���
    }
    Print(NUM);
}