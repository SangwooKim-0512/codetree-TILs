#include <iostream>
using namespace std;

int Num(int n){
    if(n == 0) return 0;
    return Num(n/10) + n%10;
}

int main() {
    int a, b, c;
    cin >> a >> b >>c;
    cout << Num(a*b*c);
    return 0;
}