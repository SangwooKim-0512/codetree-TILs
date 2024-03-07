#include <iostream>
#include <algorithm>

using namespace std;

bool SameNum(int a[], int b[], int n){
    
    for(int i = 0; i < n; i++)
        if(a[i] != b[i]) return false;

    return true;
}

int main() {
    int n;
    cin >> n;
    int A[n], B[n];
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];

    sort(A, A+n);
    sort(B, B+n);

    if(SameNum(A, B, n)) cout << "Yes";
    else cout << "No";
    return 0;
}