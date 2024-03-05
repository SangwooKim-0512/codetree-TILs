#include <iostream>
using namespace std;

bool JudgeDay(int M, int D){
    if(M > 12) return false;
    if(M == 2){
        if(D > 28) return false;
    }
    if(M == 3 || M == 4 || M == 6 || M == 9 || M == 11){
        if(D > 30) return false;
    }
    else{
        if(D > 31) return false;
    }
    return true;
}

int main() {
    int M, D;
    cin >> M >> D;
    if(JudgeDay(M, D)) cout << "Yes";
    else cout << "No";
    return 0;
}