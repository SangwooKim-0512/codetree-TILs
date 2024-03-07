#include <iostream>
using namespace std;

int Num(int n){

    if(n <= 0) return 0;

    if(n % 2 == 1)
        return Num(n - 2) + n;

    else
        return Num(n - 2) + n;

}

int main() {
    int n;
    cin >> n;
    cout << Num(n);
    return 0;
}