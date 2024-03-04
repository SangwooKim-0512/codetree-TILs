#include <iostream>
using namespace std;


bool Prime(int n){
    if(n == 1) return false;
    
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for(int i = a; i <= b; i++){
        if(Prime(i)) sum += i;
    }
    cout << sum;
    return 0;
}