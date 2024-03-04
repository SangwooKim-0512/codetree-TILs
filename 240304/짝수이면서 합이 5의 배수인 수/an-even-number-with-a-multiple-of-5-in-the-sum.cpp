#include <iostream>
 using namespace std;


string Result(int n){
    int a = n / 10;
    int b = n % 10;
    //cout << a << " " << b << '\n';
    if(n % 2 == 0 && (a+b) % 5 == 0) return "Yes";
    else return "No";
}

int main() {
    int n;
    cin >> n;
    cout << Result(n);
    return 0;
}