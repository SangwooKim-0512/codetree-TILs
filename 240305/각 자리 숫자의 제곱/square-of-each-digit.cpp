#include <iostream>
using namespace std;

int Sum(int n){
    if(n < 10) return n*n;
    return Sum(n/10) + ((n%10)*(n%10));
}

int main() {
    int n ;
    cin >> n;
    cout << Sum(n);
    return 0;
}