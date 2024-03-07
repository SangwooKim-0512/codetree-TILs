#include <iostream>
using namespace std;

int NumberSum(int n){
    if(n == 0) return 0;
    return NumberSum(n-1) + n;
}

int main() {
    int n;
    cin >> n;
    cout << NumberSum(n);
    return 0;
}