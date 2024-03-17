#include <stdio.h>

int main() {
    int n, b;
    scanf("%d%d", &n, &b);
    int num[100], cnt = 0;
    while(1){
        if(n < b){
            num[cnt++] = n;
            break;
        }
        num[cnt++] = n % b;
        n /= b;
    }
    for(int i = cnt -1; i >= 0; i--)
        printf("%d", num[i]);
    return 0;
}