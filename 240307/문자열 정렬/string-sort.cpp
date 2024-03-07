#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    cin >> str1;
    sort(str1.begin(), str1.end());
    cout << str1;
    return 0;
}