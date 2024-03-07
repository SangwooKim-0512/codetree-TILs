#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2*n];
    for(int i = 0; i < 2*n; i++) cin >> arr[i];
    sort(arr, arr+(2*n));
    int Max = 0;
    for(int i = 0; i < n; i ++){
        if(arr[i] + arr[(2*n) - i - 1] > Max) Max =  arr[i] + arr[(2*n) - i - 1];
    }
    cout << Max;
    return 0;
}