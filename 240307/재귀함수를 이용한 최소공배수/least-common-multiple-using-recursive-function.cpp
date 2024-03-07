#include <iostream>
using namespace std;

#define Max_n 10

int arr[Max_n];

int num = 0;

int gcd(int a, int b){
    int n;
    while(b != 0){
        n = a%b;
        a = b;
        b = n;
    }

    return a;
}
int Lcm(int a, int b){
    return a*b/gcd(a, b);
}

int LcmAll(int n){
    if(n == 1) return arr[0];
    return Lcm(arr[n-1], LcmAll(n-1));
}


int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << LcmAll(n);
    return 0;
}