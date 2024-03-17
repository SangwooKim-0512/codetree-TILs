#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int cnt = 0;
    int digits[100] = {0};

    while(1){
        if(n < 2){
            digits[cnt++] = n;
            break;
        }
        digits[cnt++] = n % 2;
        n /= 2;
    }

    for(int i = cnt -1; i >= 0; i--){
        printf("%d", digits[i]);
    }
    return 0;
}