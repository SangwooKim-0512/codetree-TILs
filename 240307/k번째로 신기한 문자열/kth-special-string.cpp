#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool IncludeStr(string a, string b){
    if(a.size() < b.size()) return false;
    for(int i = 0; i < b.size(); i ++)
        if(a[i] != b[i]) return false;
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    string t;
    cin >> n >> k >> t;

    string str[n];
    for(int i = 0; i < n; i ++) cin >> str[i];

    //sort(str, str+n);

    int cnt = 0;

    string word[100];
    for(int i = 0; i < n; i++)
        if(IncludeStr(str[i], t)){
            word[cnt] = str[i];
            cnt ++;
        }
    sort(word, word + cnt);

    cout << word[k-1];

    return 0;
}