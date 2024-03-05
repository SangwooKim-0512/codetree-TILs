#include <iostream>
using namespace std;

void Print1(int N){
    if(N == 0) return;
    Print1(N-1);
    cout << N << " ";
}
void Print2(int N){
    if(N == 0) return;
    cout << N << " ";
    Print1(N-1);
}

int main() {
    int N;
    cin >> N;
    Print1(N);
    cout << endl;
    Print2(N);
    return 0;
}