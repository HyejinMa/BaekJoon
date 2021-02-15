#include <iostream>
#include <string>
#include <vector>
using namespace std;

void p2941() {
    vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
    int idx;
    string str;
    cin >> str;

    for (int i = 0; i < croatian.size(); i++)
    {
        while (1) {
            idx = str.find(croatian[i]);
            if (idx == string::npos) // string::npos 는 찾는 문자열이 없으면 리턴됨
                break;
            str.replace(idx, croatian[i].length(), "#");
        }
    }
    cout << str.length();
}