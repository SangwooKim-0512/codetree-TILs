#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char binary[11];
    scanf("%s", binary);
    int num = 0;
    for(int i = 0; i < (int)strlen(binary); i++)
        num = num * 2 + (binary[i] - '0');
    printf("%d", num);
    return 0;
}