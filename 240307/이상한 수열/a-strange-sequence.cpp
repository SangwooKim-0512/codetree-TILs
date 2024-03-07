#include <iostream>
using namespace std;

int function(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    return (function(n/3) + function(n-1));
}

int main() {
    int n;
    cin >> n;
    cout << function(n);
    return 0;
}