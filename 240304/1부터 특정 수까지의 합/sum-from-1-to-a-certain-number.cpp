#include <iostream>

using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++) sum += i;
    return sum / 10;
}

int main() {
    int n;
    cin >> n;
    cout << Sum(n);
    return 0;
}