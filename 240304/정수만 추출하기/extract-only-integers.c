#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[8], str2[8], str1_1[8], str2_1[8];
    scanf("%s%s", str1, str2);
    int cnt = 0, sum = 0;
    for(int i = 0; i < strlen(str1); i++){
        if(str1[i] >= '0' && str1[i] <= '9') str1_1[i] = str1[i];
        else break;
    }
    sum += atoi(str1_1);

    for(int i = 0; i < strlen(str2); i++){
        if(str2[i] >= '0' && str2[i] <= '9') str2_1[i] = str2[i];
        else break;
    }
    sum += atoi(str2_1);

    printf("%d", sum);
    return 0;
}