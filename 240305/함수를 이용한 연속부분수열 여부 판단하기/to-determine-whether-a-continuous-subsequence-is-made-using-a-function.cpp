#include <iostream>
using namespace std;

int n1, n2;

bool JudgeArr(int *a, int *b){
    if(n1 < n2) return false;
    for(int i = 0; i <= n1-n2; i++){
        for(int j = 0; j < n2; j++){
            if(a[i+j] != b[j]) return false;
        }
    }
    return true;
}

int main() {
    cin >> n1 >> n2;
    int a[n1], b[n2];

    for(int i = 0; i < n1; i++) cin >> a[i];
    for(int i = 0; i < n2; i++) cin >> b[i];

    if(JudgeArr(a, b)) cout << "Yes";
    else cout << "No";

    return 0;
}