#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char n[10];
    scanf("%d%d%s", &a, &b, n);
    // a진수로 표현된 n을 10진수로 변환 = num
    int num = 0;
    for(int i = 0; i < (int)strlen(n); i++)
        num = num * a + (n[i] - '0');
    //num을 b진수로 변환
    int arr[50];
    int cnt = 0;
    while(1){
        if(num < b){
            arr[cnt++] = num;
            break;
        }
        arr[cnt++] = num % b;
        num /= b;
    }
    for(int i = cnt -1; i >= 0; i--)
        printf("%d", arr[i]);
    return 0;
}