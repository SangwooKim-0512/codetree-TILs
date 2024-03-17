#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char binary[11];
    scanf("%s", binary);
    int num = 0;

    for(int i = 0; i < (int)strlen(binary); i++)
        num = num * 2 + (binary[i] - '0');
    
    num *= 17;

    int arr[100], cnt = 0;
    while(1){
        if(num < 2){
            arr[cnt++] = num;
            break;
        }
        arr[cnt++] = num % 2;
        num /= 2;
    }

    for(int i = cnt -1; i >= 0; i--)
        printf("%d", arr[i]);
    return 0;
}