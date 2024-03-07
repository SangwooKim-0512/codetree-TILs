#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100

int arr[MAX_N];

int MaxNum(int n){
    if(n == 0)
        return arr[0];
    
    return max(MaxNum(n-1), arr[n]);
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << MaxNum(n-1);
    return 0;
}