#include <iostream>
using namespace std;

int Division(int n){
    if(n == 1) return 0;
    if(n % 2 == 0)
        return Division(n / 2) + 1;
    else
        return Division(n / 3) + 1;

}

int main() {
    int n;
    cin >> n;
    cout << Division(n);
    return 0;
}