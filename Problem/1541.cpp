/*
#include <iostream>
#include <string>
using namespace std;

string str;

int ret_result(void) {

    int result = 0;
    string temp = "";
    bool minus = false;

    for (int i = 0; i <= str.size(); i++) {

        if (str[i] == '+' || str[i] == '-' || str[i] == NULL) {

            if (minus)
                result -= stoi(temp);
            else
                result += stoi(temp);
            temp = "";
            if (str[i] == '-')
                minus = true;
            continue;

        }
        temp += str[i];
    }
    return result;
}

int main(void) {

    cin >> str;

    cout << ret_result() << "\n";
}
*/