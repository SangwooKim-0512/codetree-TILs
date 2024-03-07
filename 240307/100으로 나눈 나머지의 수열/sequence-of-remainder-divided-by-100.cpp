#include <iostream>
using namespace std;

int function(int n){
    if(n == 1) return 2;
    if(n == 2) return 4;
    return (function(n-1)*function(n-2)%100);
}

int main() {
    int n;
    cin >> n;
    cout << function(n);
    return 0;
}