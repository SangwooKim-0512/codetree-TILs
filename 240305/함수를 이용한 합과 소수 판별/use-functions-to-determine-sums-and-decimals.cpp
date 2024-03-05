#include <iostream>

using namespace std;

bool Prime(int n){
    if(n == 1) return false;
    // 소수가 아니면 false 를 반환한다.
    for(int i = 2; i < n; i ++)
        if(n % i == 0) return false;
    return true;

}

bool DignitSum(int n){
    // 모든 자릿수의 합이 짝수가 아니면 false를 반환한다.

    int digit_sum = (n / 100) + ((n / 10) % 10) + (n % 10);
    if(digit_sum % 2 == 0)
        return true;
    
    return false;
     
}

bool JudgeNum(int n){
    if(Prime(n) && DignitSum(n)) return true;
    return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++) 
        if(JudgeNum(i)) cnt ++;
    cout << cnt;
    return 0;
}